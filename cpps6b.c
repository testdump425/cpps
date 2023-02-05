#include <stdio.h>
#include<math.h>

double factorial(int n) {
  double fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

double exp_series(double x, int n) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += pow(x, i) / factorial(i);
  }
  return sum;
}

int main() {
  double x;
  int n;
  
  printf("Enter the value of x: ");
  scanf("%lf", &x);
  
  printf("Enter the number of terms to use in the approximation: ");
  scanf("%d", &n);
  
  printf("e power %lf is %lf using exponential series from taylor's method\n", x, exp_series(x, n));
  printf("e power %lf is %lf using exp() from math.h library\n", x, exp(x));
  
  return 0;
}
