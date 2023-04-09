# Pseudocode for GeMM

```
B_sp = read_to_scratchpad(Matrix_B)
for i in (0...d):
    C_row = Matrix_C.read_row_to_BRAM(i)
    for j in (0...d):
        a = Matrix_A.stream_element(i, j)
        for k in (0...d):
            c = C_row[k]
            b = B_sp[j, k]
            c = c + b * a
            C_row[k] := c
    Matrix_C.write_back_row(C_row)
```