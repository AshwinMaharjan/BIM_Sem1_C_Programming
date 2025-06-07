
/*
9.3 Create a function that takes at least two integers 
arguments and returns the sum, subtraction, product, division and remainder using pointer
*/

#include<stdio.h>
void op(int num1, int num2, int *sum, int *sub, int *pro, float *div, int *rem); //function declaration
int main(){
	int num1, num2;
	int sum, sub, pro, rem;
	float div;
	
	printf("Enter the value of num1: ");
	scanf("%d",&num1);
	printf("Enter the value of num2: ");
	scanf("%d",&num2);
	
	op(num1, num2, &sum, &sub, &pro, &div, &rem); //function call
	
	printf("\nSum of two numbers is %d\n",sum);
	printf("Subtraction of two numbers is %d\n",sub);
	printf("Product of two numbers is %d\n",pro);
	printf("Division of two numbers is %.2f\n",div);
	printf("Reminder of two numbers is %d\n",rem);
	
	
		printf("\n\nLab No: 9.3\tName: Ashwin Maharjan\tRoll No: 5");
	 
	return 0;
}
//function definition
void op(int num1, int num2, int *sum, int *sub, int *pro, float *div, int *rem){
	*sum=num1+num2;
	*sub=num1-num2;
	*pro=num1*num2;
	*div=(float)num1/num2; //type conversion
	*rem=num1%num2;
}