#include <stdio.h>

int main() {
  char choice;
  int duration, TotalParkingCharges = 0;

  label:
  printf("\n");
  printf("Enter the vehicle type\n1. C/c for Car\n2. B/b for Bus\n3. T/t for Tempo\n4. exit\n: ");
  
  printf("Enter the duration (in hours): ");
  scanf("%d", &duration);

  if(choice == 4)
    exit(0);

      if (choice == 'C' || choice == 'c')
          if (duration <= 2)
              TotalParkingCharges = 20 * duration;
          else
              TotalParkingCharges = (20 * 2) + (30 * (duration - 2));

      else if (choice == 'B' || choice == 'b')
          if (duration <= 2)
              TotalParkingCharges = 40 * duration;
          else
              TotalParkingCharges = (40 * 2) + (50 * (duration - 2));

      else if (choice == 'T' || choice == 't')
          if (duration <= 2)
              TotalParkingCharges = 30 * duration;
          else
              TotalParkingCharges = (30 * 2) + (40 * (duration - 2));

      else
          printf("Enter a valid Input.\n");
    return 0;
  
  printf("Total parking charges: Rs %d\n", TotalParkingCharges);
  goto label;
  return 0;
}
