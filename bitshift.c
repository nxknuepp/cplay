#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint64_t Bitset;
void printBit(int num) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // Group by 4 bits for readability
    }
    printf("\n");
}

int main(void) {
  Bitset bs = 1ULL;
  printBit(bs);
  for (int i = 0; i < 8; i++) {
    printBit(bs);
    printf("%d\n", bs);
    bs <<= 1;
  }
  bs |= 1ULL;
  printBit(bs);
  return 0;
}
  
