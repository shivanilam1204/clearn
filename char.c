#include <stdio.h>
int main() {
  int number = 21;
  printf("size of int is %lu\n", sizeof(number));

  short int shortNumber = 21;
  printf("size of short is %lu\n", sizeof(shortNumber));

  char charNumber = 21;
  printf("size of char is %lu\n", sizeof(charNumber));
}