//Create a function that returns sum, difference, product, division of 2 numbers
#include<stdio.h>
void op(int num1, int num2, int *sum, int *diff, int *pro, float *div); //function declaration
int main(){
	int num1, num2;
	int sum, diff, pro;
	float div;
	
	printf("Enter the value of num1: ");
	scanf("%d",&num1);
	printf("Enter the value of num2: ");
	scanf("%d",&num2);
	
	op(num1, num2, &sum, &diff, &pro, &div); //function call
	
	printf("\nSum of two numbers is %d\n",sum);
	printf("Difference of two numbers is %d\n",diff);
	printf("Product of two numbers is %d\n",pro);
	printf("Division of two numbers is %.2f\n",div);
	
		printf("\n\nLab No: 7.15\tName: Ashwin Maharjan\tRoll No: 5");

	 
	return 0;
}
//function definition
void op(int num1, int num2, int *sum, int *diff, int *pro, float *div){
	*sum=num1+num2;
	*diff=num1-num2;
	*pro=num1*num2;
	*div=(float)num1/num2; //type conversion
}