#include <stdio.h>

int ret2(void);

int main(int argc, const char* arvg[]) {
  int (*fp)(void);
  fp=ret2;
  printf("%d\n", ret2());
  printf("%d\n", fp());
  return 0;
}

int ret2(void) {
  return 2;
}
