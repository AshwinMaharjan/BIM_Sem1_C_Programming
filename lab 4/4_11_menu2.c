/*
A - Addition
S - Subtraction
M - Multiplication
D - Division
R - Remainder
E - Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1, num2, op, add, sub, mul, div, rem;
	do{
	printf("\n\nEnter the first number:");
	scanf("%d", &num1);
	printf("Enter the second number:");
	scanf("%d", &num2);
	
	printf("\nChoose from the following menu:\n");
	printf("A - Addition\n");
	printf("S - Subtraction\n");
	printf("M - Multiplication\n");
	printf("D - Division\n");
	printf("R - Remainder\n");
	printf("E - Exit\n\n");
	
	printf("Enter the operator you want to perform (A,S,M,D,R,E): ");
	scanf("%s",&op);
	
	switch(op){
		case 'A':
			add=num1+num2;
			printf("The addition of entered number is %d", add);
			break;
		case 'S':
			sub=num1-num2;
			printf("The subtraction of entered number is %d", sub);
			break;
		case 'M':
			mul=num1*num2;
			printf("The multiplication of entered number is %d", mul);
			break;
		case 'D':
			div=num1/num2;
			printf("The division of entered number is %d", div);
			break;
		case 'R':
			rem=num1%num2;
			printf("The remainder of entered number is %d", rem);
			break;
		case 'E':
			exit(0);
		default:
			printf("Invalid Input. Please choose from the menu.");
}
	}while(op!='E');

	printf("\n\nLab No: 4.11\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}