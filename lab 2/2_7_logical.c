//program to illustrate logical operator
#include<stdio.h>
int main(){
	int a=14; 
	int b=24;
	int result=0;
		
	//The result of && operator is 1 if both comparison is true, otherwise it is 0
	result = (a==b) && (a<b); //logical AND
	printf("The value is %d\n", result);
	
	//The result of || operator is 1 if one of the comparison is true, otherwise it is 0
	result = (a==b) || (a<b); //logical OR
	printf("The value is %d\n", result);
	
	//The result of ! operator is 1 if the result is true, otherwise it is 0
	result = !(a==b); //logical NOT
	printf("The value is %d\n", result);
	
		
	printf("\n\nLab No: 2.7\tName: Ashwin Maharjan\tRoll No: 5");
	
	return 0;
}