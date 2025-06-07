//function with no argument and no return types
#include<stdio.h>
void add(); //function declaration
int main(){
	add(); //function call
	    	printf("\n\nLab No: 7.3\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}
//function definition
void add(){
	int a=20,b=30,sum;
	sum=a+b;
	printf("The sum is %d",sum);
}