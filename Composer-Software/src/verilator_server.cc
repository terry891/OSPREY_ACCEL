//
// Created by Chris Kjellqvist on 11/14/22.
//

#include "composer/verilator_server.h"
#include <pthread.h>
#include <cstring>

using namespace composer;

// https://stackoverflow.com/questions/3419332/c-preprocessor-stringify-the-result-of-a-macro
#define QUOTE(q) #q
#define EXPAND_AND_QUOTE(q) QUOTE(q)

const std::string composer::cmd_server_file_name = "/compo_c_" EXPAND_AND_QUOTE(COMPOSER_IDENTITY);
const std::string composer::data_server_file_name = "/compo_d_" EXPAND_AND_QUOTE(COMPOSER_IDENTITY);

void cmd_server_file::init(cmd_server_file &csf) {

  pthread_mutexattr_t attrs;
  pthread_mutexattr_init(&attrs);
  pthread_mutexattr_setpshared(&attrs, PTHREAD_PROCESS_SHARED);

  pthread_mutex_init(&csf.process_waiting_count_lock, &attrs);
  pthread_mutex_init(&csf.server_mut, &attrs);
  pthread_mutex_init(&csf.cmd_recieve_server_resp_lock, &attrs);
  pthread_mutex_init(&csf.cmd_send_lock, &attrs);
  for (unsigned i = 0; i < MAX_CONCURRENT_COMMANDS; ++i) { // NOLINT(modernize-loop-convert)
    pthread_mutex_init(&csf.wait_for_response[i], &attrs);
    pthread_mutex_lock(&csf.wait_for_response[i]);
  }
  pthread_mutex_init(&csf.free_list_lock, &attrs);
  pthread_mutex_lock(&csf.cmd_recieve_server_resp_lock);

// wait_responses are all initially available
  for (int i = 0; i < MAX_CONCURRENT_COMMANDS; ++i) csf.free_list[i] = i;
  csf.free_list_idx = 255;
  csf.quit = false;
  csf.processes_waiting = 0;
}

void data_server_file::init(data_server_file &dsf) {
  pthread_mutexattr_t attrs;
  pthread_mutexattr_init(&attrs);
  pthread_mutexattr_setpshared(&attrs, PTHREAD_PROCESS_SHARED);

  pthread_mutex_init(&dsf.server_mut, &attrs);
  pthread_mutex_init(&dsf.data_cmd_recieve_resp_lock, &attrs);
  pthread_mutex_lock(&dsf.data_cmd_recieve_resp_lock);
  pthread_mutex_init(&dsf.data_cmd_send_lock, &attrs);
  memset(dsf.fname, 0, 512);
  dsf.op_argument = 0;
}
