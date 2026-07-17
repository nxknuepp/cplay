/* test of unusual print statement */
#include <stdio.h>
#include <stdbool.h>

#define MAX 5

static char ch[MAX] = {'a', 'b', 'c', 'd', 'e'};

int main(void) {
  printf("%s\n", (char[]){'x','\0'}); // generate a string from 2 chars
  /* loop thru char array, printing each element */
  bool first = true;
  for (int i=0; i < MAX; i++) {
    if (!first) printf(", ");
    printf("%s", (char[]){ch[i], '\0'});
    first = false;
  }
  printf("\n");
  return 0;
}
                  
