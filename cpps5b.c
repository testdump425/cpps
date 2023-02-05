#include <stdio.h>

int factorial(int num) {
  if (num == 0) {
    return 1;
  }
  return num * factorial(num - 1);
}

int main() {
  int num, fact;

  printf("Enter a positive number foe which you want the factorial to be found: \n");
  scanf("%d", &num);

 fact = factorial(num);
  printf("Factorial of %d is: %d", num, fact);

  return 0;
}
