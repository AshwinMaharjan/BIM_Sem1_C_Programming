/*
Create a function that takes an integer and 
returns 1000 if the integer is even otherwise return 2000
*/

#include<stdio.h>
int returnValue(int);
int main(){
	int num,result;
	printf("Enter an integer:");
	scanf("%d",&num);
	result=returnValue(num);
	printf("The required result is: %d",result);	
     printf("\n\nLab No: 7.7\tName: Ashwin Maharjan\tRoll No: 5");
	return 0;
}
int returnValue(int a){
	if(a%2==0){
		return 1000;
	}
	else{
		return 2000;
	}
}

