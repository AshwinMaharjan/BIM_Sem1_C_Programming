#include <stdio.h>
int main() {
   int arr[3][3] = {{1, 20, 3}, {4, 50, 6}, {7, 80, 9}};
   int sum = 0, i, j;

   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         sum = sum + arr[i][j];
      }
   }

	   printf("Sum of all elements of the array: %d", sum);

	printf("\n\nLab No: 6.13\tName: Ashwin Maharjan\tRoll No: 5");


   return 0;
}
