/*
Create 4 function that finds sum, difference, product and division 
of two numbers provided as argument. 
*/

#include<stdio.h>
int sum(int a, int b);
int diff(int a, int b);
int pro(int a, int b);
int div(int a, int b);

int main(){
	int num1=20, num2=10;
	printf("Sum is: %d", sum(num1, num2));
	printf("\nDifference is: %d", diff(num1, num2));
	printf("\nProduct is: %d", pro(num1, num2));
	printf("\nDivision is: %d", div(num1, num2));
	
	printf("\n\nLab No: 7.4\tName: Ashwin Maharjan\tRoll No: 5");
	return 0;
}

int sum(int a, int b){
	return(a+b);
} int diff(int a, int b){
	return(a-b);
} int pro(int a, int b){
	return(a*b);
} int div(int a, int b){
	return(a/b);
}