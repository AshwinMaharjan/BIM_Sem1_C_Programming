/*
Create a function that returns sum, difference, product, division of 2 numbers. 
(Use concept of structure)
*/

#include<stdio.h>
struct op{
	int sum, diff, pro;
	float div;
};

struct op calculate(int num1, int num2); //function declaration

int main(){
	int num1, num2;
	printf("Enter the value of num1: ");
	scanf("%d",&num1);
	printf("Enter the value of num2: ");
	scanf("%d",&num2);
	
	struct op result = calculate(num1, num2);
	
	printf("\nThe sum of two numbers: %d\n",result.sum);
	printf("The difference of two numbers: %d\n",result.diff);
	printf("The product of two numbers: %d\n",result.pro);
	printf("The division of two numbers: %.2f\n",result.div);	
	
	
	
			printf("\n\nLab No: 10.3\tName: Ashwin Maharjan\tRoll No: 5");
			
				return 0;

}

//function declaration
struct op calculate(int num1, int num2){
	struct op result;
	result.sum=num1+num2;
	result.diff=num1-num2;
	result.pro=num1*num2;
	result.div=(float)num1/num2;
	
	return result;
	
}