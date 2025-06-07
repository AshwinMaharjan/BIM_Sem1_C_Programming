//to check whether a num is divisible by 5 and 17 or not

#include<stdio.h>
int main(){
	int num;
	printf("Enter any number:"); //85
	scanf("%d",&num);
	
	if(num % 5==0 && num % 17==0){
		printf("Yes, the entered number is divisible by 5 and 17");
	}
	else{
		printf("No, the entered number is not divisible by 5 and 17");
	}
	printf("\n\nLab No.:3.14\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}