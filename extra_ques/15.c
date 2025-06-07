//recursion of factorial
#include<stdio.h>
int factorial(int num); //function declaration
int main(){
	int num;
	int result;
	
	printf("Enter the number for the factorial: ");
	scanf("%d",&num);
	
	result=factorial(num); //function call
	
	printf("The factorial of entered number is: %d",result);
	
	
	return 0;
}
//function definition
int factorial(int num){
	if(num==0){ //base case
		return 1;	
	} else{ //recursive case
		return (num*factorial(num-1));
	}	
}
