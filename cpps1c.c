#include <stdio.h>

int main() {
  int num1, num2, n, temp;

  printf("Enter the first two numbers in the series: ");
  scanf("%d %d", &num1, &num2);

  printf("Enter the nth fibonacci series that you want to find: ");
  scanf("%d", &n);

  printf("The %dth Fibonacci number is: ", n);
  for (int i = 0; i < n - 2; i++) {
    temp = num1 + num2;
    num1 = num2;
    num2 = temp;
  }
  printf("%d\n", num2);

  return 0;
}
