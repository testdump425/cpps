#include <stdio.h>
#include<stdlib.h>

#define MAX 100
int i,j,k,r1,r2,c1,c2;

void read(int a[][MAX], int b[][MAX]) {

  printf("enter elements of matrix A:\n");
  for (i = 0; i < r1; i++) 
    for (j = 0; j < c1; j++) 
      scanf("%d", &a[i][j]);

  printf("enter elements of matrix B:\n");
  for (i = 0; i < r2; i++) 
    for (j = 0; j < c2; j++) 
      scanf("%d", &b[i][j]);
}

void matrixmult(int a[][MAX], int b[][MAX], int c[][MAX]) {

  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      c[i][j] = 0;
      for ( k = 0; k < c2; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

void print(int arr[][MAX], int r , int c) {
  int i, j;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
}


int main() {
  int a[MAX][MAX] , b[MAX][MAX] , c[MAX][MAX];

 printf("Enter number of rows in matrix A: ");
  scanf("%d", &r1);

  printf("Enter number of columns in matrix A: ");
  scanf("%d", &c1);

  printf("Enter number of rows in matrix B: ");
  scanf("%d", &r2);

  printf("Enter number of columns in matrix B: ");
  scanf("%d", &c2);

  if(c1 != r2){
    printf("matrix multiplication not possible.\n");
    exit(0);
  }
else{
  read(a,b);

  matrixmult(a,b,c);

  printf("Matrix A:\n");
  print(a,r1,c1);
  printf("Matrix B:\n");
  print(b,r2,c2);
  printf("Resultant matrix:\n");
  print(c,r1,c2);

}
return 0;
}
