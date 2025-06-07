//smallest among three numbers
#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter the third number:");
	scanf("%d",&num3);
	
	if(num1<num2 && num1<num3){
		printf("The first number is smallest");
	}
	else if(num2<num3){
		printf("The second number is smallest");
	}
	else{
		printf("The third number is smallest");
	}
	printf("\n\nLab No.:3.6\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}

