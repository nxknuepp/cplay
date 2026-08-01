// Double dispatch using a 2x2 matrix of function pointers

#include <stdio.h>
#include <stdlib.h>

void f11(){printf("f11\n");}
void f12(){printf("f12\n");}
void f21(){printf("f21\n");}
void f22(){printf("f22\n");}

int main(int argc, char *argv[]) {
  int i = atoi(argv[1]);
  int j = atoi(argv[2]);
  void (*fp[2][2])() = {{f11, f12}, {f21, f22}};
  fp[i][j]();
  return 0;
}
