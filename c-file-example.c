#include <stdio.h>

int timestwo(int num);

int main(void) {
  int i = 5;
  i = timestwo(i);
  printf("\nThe value of i is %d.\n", i);
  return 0;
}

int timestwo(int num) {
  return num * 2;
}
