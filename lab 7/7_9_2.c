//call by reference
#include <stdio.h>
void sum(int *a); //function declaration
int main() {
    int a = 5;
    sum(&a); //call by reference
    printf("Value of a outside function: %d\n", a);
            printf("\n\nLab No: 7.9\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}
//function definition
void sum(int *a) {
    *a = *a + 1;
    printf("Value of a inside function: %d\n", *a);
}
