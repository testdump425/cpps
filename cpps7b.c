#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int r1, c1, r2, c2;

void readArray(int a[][MAX], int b[][MAX]) {
  printf("Enter elements of first matrix:\n");
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter elements of second matrix:\n");
  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++) {
      scanf("%d", &b[i][j]);
    }
  }
}

void matrixMult(int a[][MAX], int b[][MAX], int c[][MAX]) {
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      c[i][j] = 0;
      for (int k = 0; k < c1; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

void printArray(int arr[][MAX], int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

  printf("Enter number of rows in matrix A: ");
  scanf("%d", &r1);

  printf("Enter number of columns in matrix A: ");
  scanf("%d", &c1);

  printf("Enter number of rows in matrix B: ");
  scanf("%d", &r2);

  printf("Enter number of columns in matrix B: ");
  scanf("%d", &c2);

  if (c1 != r2) {
    printf("Matrix multiplication not possible.\n");
    exit(0);
  } else {
    readArray(a, b);

    matrixMult(a, b, c);

    printf("First matrix:\n");
    printArray(a, r1, c1);
    printf("Second matrix:\n");
    printArray(b, r2, c2);
    printf("Product matrix:\n");
    printArray(c, r1, c2);

    return 0;
  }
}
