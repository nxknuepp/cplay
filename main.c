#include <stdio.h>
#include <stddef.h>

// Test of standard macro (NUMBER)
// to test the effect, use -E -Dd options of gcc

#define NUMBER = 216

int main(int argc, const char* arvg[]) {
  int num = NUMBER;
  return 0;
}
