#include <stdio.h>
int main() {
  char character = 'a';
  printf("character: %c; number: %d\n", character, character);

  char character1 = 97;
  printf("character: %c; number: %d\n", character1, character1);

  char character2 = 90;
  printf("character: %c; number: %d\n", character2, character2);

  char chars[5] = {'G', 'n', 'a', 'n', '\0'}; // char*
  printf("%s\n", chars);

  char *string = "How are you?";
}