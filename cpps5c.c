#include <stdio.h>

int main() {
  int n1, n2, n3;

  printf("Enter three numbers: ");
  scanf("%d%d%d", &n1, &n2, &n3);

  (n1 < n2) ? ((n1 < n3) ? printf("min = %d " ,n1) : printf("min = %d " , n3)) : ((n2 < n3) ? printf("min = %d " , n2) : printf("min = %d " , n3));

  return 0;
}
