#include <stdio.h>

int sub(int x, int y) {
  return x - y;
}

int add(int x, int y) {
  return x + y;
}

int main(){
  printf("2 + 2 = %d\n", add(2,2));
  printf("5 - 3 = %d\n", sub(5, 3));
  printf("Hello World!\n");
}
