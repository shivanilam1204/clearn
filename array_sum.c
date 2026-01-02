#include <stdio.h>
int main() {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7};
  int answer = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
  printf("sum of the numbers is %d\n", answer);

  int answer1 = 0;
  answer1 = answer1 + numbers[0];
  answer1 = answer1 + numbers[1];
  answer1 = answer1 + numbers[2];
  answer1 = answer1 + numbers[3];
  answer1 = answer1 + numbers[4];
  printf("sum of the numbers is %d\n", answer1);

  // sizeof(numbers) = 24
  // sizeof(int) = 4
  int answer2 = 0;
  for (int index = 0; index < sizeof(numbers) / sizeof(int); index++) {
    answer2 = answer2 + numbers[index];
  }
  printf("sum of the numbers is %d\n", answer2);
}
