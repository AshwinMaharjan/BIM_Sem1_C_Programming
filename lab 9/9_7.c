//9.7 Demonstrate the concept of pointer to pointer (Double pointer).

#include<stdio.h>
int main(){
	int num;
	int *ptr1 = &num;
	int **ptr2 = &ptr1;

	printf("Enter the value of num: ");
	scanf("%d",&num);
	
	printf("The value of num: %d\n",num);
	printf("The value of *ptr1: %d\n",*ptr1);
	printf("The value of **ptr2: %d",**ptr2);


	printf("\n\nLab No: 9.7\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;

}