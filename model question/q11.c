//Write a program to check if the input given by the user is divisible by 5 or 7.
#include<stdio.h>
int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if(num % 5 == 0 || num % 7 == 0){
		printf("The entered number is divisbile by 5 or 7");
	}else{
		printf("The entered number is not divisbile by 5 or 7");
	}

	return 0;
}