#include <stdio.h>
void printMultiplication(int number1, int number2, int number3) {
  int answer = number1 * number2 * number3;
  printf("multiplication of %d, %d and %d is %d\n", number1, number2, number3,
         answer);
}

int main() { printMultiplication(1, 3, 4); }