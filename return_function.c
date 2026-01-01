#include <stdio.h>
int addition(int input1, int input2) {
  int answer = input1 + input2;
  return answer;
}

int give5() { return 5; }

int main() {
  int sum = addition(5, 2);
  printf("sum is %d\n", sum);

  int mul = addition(5, 2) * 10;
  printf("mul is %d\n", mul);

  printf("number is %d\n", give5());
}