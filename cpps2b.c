#include <stdio.h>
#include <math.h>

double factorial(int n) {
  double fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

double taylor(double x, int n) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
  }
  return sum;
}

int main() {
  double x;
  int n;
  
  printf("Enter the value of x sin(x): ");
  scanf("%lf", &x);

  x =  x*(M_PI/180);
  
  printf("Enter n for approximation: ");
  scanf("%d", &n);
  
  printf("Sin(%lf) = %lf (using Taylor's series approximation)\n", x, taylor(x, n));
  printf("Sin(%lf) = %lf (using sin() from math.h)\n", x, sin(x));
  
  return 0;
}
