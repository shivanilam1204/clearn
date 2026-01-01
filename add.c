#include <stdio.h>

void printAddition(int number1, int number2) {
  printf("sum of %d and %d is %d\n", number1, number2, number1 + number2);
}

int main() {
  /*int number1 = 21;
  int number2 = 15;
  printf("sum of %d and %d is %d\n", number1, number2, number1 + number2);

  number1 = 4;
  number2 = 3;
  printf("sum of %d and %d is %d\n", number1, number2, number1 + number2);

  number1 = 5;
  number2 = 4;
  printf("sum of %d and %d is %d\n", number1, number2, number1 + number2);

  number1 = 12;
  number2 = 3;
  printf("sum of %d and %d is %d\n", number1, number2, number1 + number2);*/

  printAddition(21, 15);
  printAddition(4, 3);
  printAddition(5, 4);
  printAddition(12, 3);

  return 0;
}