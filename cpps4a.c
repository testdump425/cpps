#include <stdio.h>

int main() {
  int n, rev = 0, rem;

  printf("Enter a number: ");
  scanf("%d", &n);

 int n1 = n;

  while (n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

  if (n1 == rev) {
    printf("%d is a palindrome.\n", n1);
  } else {
    printf("%d is not a palindrome.\n", n1);
  }

  return 0;
}
