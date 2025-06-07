//leap year or not

#include<stdio.h>
int main(){
	int year;
	printf("Enter any year:");
	scanf("%d", &year);
	
	if(year%4==0){
		printf("The entered year is a leap year");
	}
	else if(year%400==0){
		printf("The entered year is a leap year");
	}
	else if(year%100==0){
		printf("The entered year is not a leap year");
	}
	else{
		printf("The entered year is not a leap year");
	}
	printf("\n\nLab No.:3.7\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}