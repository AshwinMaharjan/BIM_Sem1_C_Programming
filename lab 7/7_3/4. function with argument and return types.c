//function with argument and return types
#include<stdio.h>
int add(int,int); //function declaration
int main(){
	int a=10,b=20,sum;
	sum=add(a,b); //function call
	printf("The sum is %d",sum);
	printf("\n\nLab No: 7.3\tName: Ashwin Maharjan\tRoll No: 5");
		
	return 0;
	}
		//function definition
	int add(int x, int y){
		int sum;
		sum=x+y;
		return sum;
	
	}