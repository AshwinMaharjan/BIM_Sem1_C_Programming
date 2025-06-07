//Write a program to compute the factorial of number entered by the user using recursion
#include<stdio.h>
int factorial(int num);

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("The factorial of entered number is: %d",factorial(num));	
	
	return 0;
}
int factorial(int num){
	if(num==0){
		return 1; //base case
	}
	else{
		return (num*factorial(num-1)); //recursive function
	}
}
