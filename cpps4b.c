#include <stdio.h>
#include <string.h>
#define MAX 100

void reverse(char *str) {
  int len = strlen(str);
  char temp;

  for (int i = 0; i < len/2; i++) {
    temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}

int main() {
  char str[MAX];

  printf("Enter a string: ");
  scanf("%s", str);
  reverse(str);
  printf("reverse of the string is '%s'", str);

  return 0;
}
