//function with no argument and a return types
#include<stdio.h>
int add(void); //function declaration
int main(){
	printf("The sum is %d",add());
			    	printf("\n\nLab No: 7.3\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}
//function definition
int add(void){
	int a=30,b=40,sum;
	sum=a+b;
	return(sum);
}