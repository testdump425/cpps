#include <stdio.h>

int ladder_if(int num1, int num2, int num3) {
  if (num1 >= num2 && num1 >= num3) 
    return num1;
  else if (num2 >= num1 && num2 >= num3) 
    return num2;
  else
    return num3;
}

int nested_if(int num1, int num2, int num3) {
  if (num1 >= num2) 
    if (num1 >= num3) 
      return num1;
    else 
      return num3;
    
    else 
    if (num2 >= num3) 
      return num2;
    else 
      return num3;
  }

int main() {
  int num1, num2, num3;
  
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  
  printf("Largest number (using if-else-if): %d\n", ladder_if(num1, num2, num3));
  printf("Largest number (using nested if): %d\n", nested_if(num1, num2, num3));
  
  return 0;
}
