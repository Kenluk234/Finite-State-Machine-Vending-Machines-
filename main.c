#include <stdio.h>
#include <unistd.h>

void clc(int A, int B, int C, int D, int *x1, int *x2) {
  *x1 = A & C | A & D | B & C;
  *x2 = A & B & C | A & C & D | !A & !C & D | B & D;
  
  if (*x1 == 0 && *x2 == 0) {
    printf("\nIdle");
  }

  else if (*x1 == 0 && *x2 == 1) {
    printf("\nProcessing");
  }

  else if (*x1 == 1 && *x2 == 0) {
    printf("\nSold");
  }

  else {
    printf("\nSold Out");
  }
}

int main() {
  int A, B, C, D;
  for (int A = 0; A < 2; A++) {
    for (int B = 0; B < 2; B++) {
      for (int C = 0; C < 2; C++) {
        for (int D = 0; D < 2; D++) {
          int x1, x2;
          clc(A, B, C, D, &x1, &x2);
          printf("\nCurrent: %d%d", A, B);
          printf("\nInput: %d%d", C, D);
          printf("\nOutput: %d%d", x1, x2);
          sleep(0.1);
          }
        }
    }
  }
  return 0;
}
