// Exercises with structs

#include <stdio.h>

int main(void) {
  struct Point {
    float x;
    float y;
  };

  struct Point pt1 = {0.2, 0.5};
  printf("%.2f   %.2f\n", pt1.x, pt1.y);
  return 0;
}
       
