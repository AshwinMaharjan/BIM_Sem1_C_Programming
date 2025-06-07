//function with argument and no return types
#include<stdio.h>
void add(int,int); //function declaration
int main(){
	int a=60,b=40;
	add(a,b); //function call
		    	printf("\n\nLab No: 7.3\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}
//function definition
void add(int x, int y){
	int sum;
	sum=x+y;
	printf("The sum is %d", sum);
}