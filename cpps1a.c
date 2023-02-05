#include <stdio.h>

int SwapWithTemp(int num1, int  num2) {

  int temp;  
  temp = num1;
  num1 = num2;
  num2 = temp;
   printf("The swapped numbers are: %d and %d", num1, num2);
  
}

int SwapWithoutTemp(int num1 , int num2){
   
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
   printf("The swapped numbers are: %d and %d", num1, num2);
  
}

int main(){

  int num1, num2, choice;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("1. Swap with temp\n2. SwapWithouttemp\n");
  scanf("%d" , &choice);  
  switch(choice){
     case 1:
       SwapWithTemp(num1,num2);
       break;

       case 2:
        SwapWithoutTemp(num1,num2);
        break;

        default:
         printf("enter a valid in input :\n");
         break;
         
  }
 
  return 0;
  
}
