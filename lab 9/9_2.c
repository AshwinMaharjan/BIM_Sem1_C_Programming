/*
9.2 Pass the base address of an array to a function and print 
all the elements of that array in the function.

*/
#include<stdio.h>
void printArr(int *array); //function declaration

int main() {
    int i;
	int array[10];
	for(i=0;i<10;i++){
		printf("Enter the elements for %d: ",i+1);
		scanf("%d", &array[i]);
	}    
		printArr(&array);
		
			printf("\n\nLab No: 9.2\tName: Ashwin Maharjan\tRoll No: 5");


    return 0;
}
//function definition
void printArr(int *array) {
    int i;
    printf("\nThe entered elements are: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(array+i));
    }
}