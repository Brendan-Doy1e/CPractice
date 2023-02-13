#include <stdio.h>

int main() {
  int array[3][3][3] = {
    {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
    {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
    {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
  };

  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        if(j % 3 == 0){
            printf("\n");
        }
      for (k = 0; k < 3; k++) {
        if(k % 3 == 0){
            printf("| ");
        }
        printf("%d\t", array[i][j][k]);
      }
    }
  }

  return 0;
}
