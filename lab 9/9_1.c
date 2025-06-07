#include <stdio.h>
int main() {
    int num1=60, num2=70; // Declare variable num1 with value of 60 and num2 with value of 70
    int * ptr1 = &num1; // Declare a pointer variable ptr1 that points to the memory address of num1
    int * ptr2 = &num2; // Declare a pointer variable ptr2 that points to the memory address of num2

    printf("The value of num1: %d\n", num1);
    printf("The address of num1: %p\n", &num1);
    printf("The value of num2: %d\n", num2);
    printf("The address of num2: %p\n", &num2);
    
//    printf("The sum of num1 and num2: %d\n",*ptr1+*ptr2);

    *ptr1 = 40; // Change the value of num1 indirectly through ptr1
    *ptr2 = 50; // Change the value of num2 indirectly through ptr2

	printf("The result of num1 after changing the value: %d\n", num1); // This will print the updated value of num1
	printf("The result of num2 after changing the value: %d\n", num2); // This will print the updated value of num2

  			printf("\n\nLab No: 9.1\tName: Ashwin Maharjan\tRoll No: 5");
    return 0;
}
