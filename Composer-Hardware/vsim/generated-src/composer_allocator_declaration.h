// Automatically generated memory-allocator declaration from Composer-Hardware:CppGeneration
#include <composer/alloc.h>
#include <composer/rocc_cmd.h>
#include <cinttypes>
#ifndef COMPOSER_ALLOCATOR_GEN
#define COMPOSER_ALLOCATOR_GEN
#define AXIL_BUS_WIDTH 32
#define COMPOSER_USE_CUSTOM_ALLOC
#define NUM_DDR_CHANNELS 1
using composer_allocator=composer::device_allocator<17179869184>;
const uint8_t composerNumAddrBits = 34;
enum EnergyCalcCommands {
	addrs_data_HNBT = 0 ,
	addrs_NBT_ST = 1 ,
};
#define RESP_BITS (0)
#define RESP_VALID (4)
#define RESP_READY (8)
#define CMD_BITS (12)
#define CMD_VALID (16)
#define CMD_READY (20)
#define AXIL_DEBUG (24)
const uint8_t EnergyCalc_ID = 0;
// index by... sys_id, core_id, name_id, id_within_channel
enum ComposerChannels {
	WriteChannel = 0,
};
static const char __composer_channel_map[1][1][1][1] = {{ { { 0}}}};

namespace composer {
  static ChannelAddressInfo getChannelSubIdx(uint16_t system_id, uint8_t core_id, ComposerChannels name, int id) {
    return ChannelAddressInfo(system_id, core_id, __composer_channel_map[system_id][core_id][uint8_t(name)][id]);
  }
}

static const uint8_t system_id_bits = 4;
static const uint8_t core_id_bits = 8;
static const composer::composer_pack_info pack_cfg(system_id_bits, core_id_bits);
static const uint64_t addrMask = 17179869183;
#define COMPOSER_HAS_DMA
#ifdef SIM
#include <verilated.h>
using ComposerMemAddressSimDtype=QData;
using ComposerStrobeSimDtype=QData;
using ComposerMemIDDtype=CData;
using ComposerDMAIDtype=CData;
#define DATA_BUS_WIDTH 512
#endif
const uint64_t ComposerMMIOOffset = 0L;
#endif
