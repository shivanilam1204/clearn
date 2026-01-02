int main() {
  int number = 7;
  int number1 = 14;

  // Variable storage
  number = 8;
  // Variable access
  number1 = number * 5; // number1 = 8 * 5;

  int numbers[5] = {7, 14, 21, 28, 35}; // 8 * 5 // numbers = int*
  // Array indexing assignment
  numbers[0] = 8;
  // Array indexing access
  number1 = numbers[0] * 5;

  number1 = numbers[1];
  number1 = numbers[4];

  // Out of range indexing
  number1 = numbers[5];
  numbers[5] = 10;
}