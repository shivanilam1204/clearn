#include <stdio.h>
int main() {
  char chars[8] = {'L', 'a', 'k', 's', 'h', 'm', 'i', '\0'};
  printf("%s\n", chars);

  char *name = "Lakshmi";
  printf("%s\n", name);
}