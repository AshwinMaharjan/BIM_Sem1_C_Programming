//9.5 Demonstrate the concept of array of pointers
#include <stdio.h>
int main() {
  
  int num[5] = {10, 20, 30, 40, 50}; // Declare an array of integers

  int *ptr; // Declare a pointer of integers
  ptr=&num[0];
  int i;
  
  // Assign each element in the array of pointers to the corresponding element in the array of integers
  for (i = 0; i < 5; i++) {
    ptr[i] = *&num[i];
  }

  // Print the values of the array of integers using the array of pointers
  printf("\t\tArrays of Pointer\n\n");
  printf("num[i] \t\t &num[i] \t\t*ptr \t ptr+i \t\t\t *(num+i)\n");
  
  for (i = 0; i < 5; i++) {
    printf("num[%d]:%d->\t %p \t%d \t %p \t %d\n", i, num[i],&num[i],*ptr,ptr+i,*(num+i));
  }
  			printf("\n\nLab No: 9.5\tName: Ashwin Maharjan\tRoll No: 5");


  return 0;
}
