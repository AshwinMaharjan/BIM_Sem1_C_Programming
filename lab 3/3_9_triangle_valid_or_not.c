//triangle is valid or not
#include<stdio.h>
int main(){
	int a,b,c,sum;
	printf("Enter the first angle of a triangle:");
	scanf("%d",&a);
	printf("Enter the second angle of a triangle:");
	scanf("%d",&b);
	printf("Enter the third angle of a triangle:");
	scanf("%d",&c);
	
	sum=a+b+c;
	if(sum<=180){
		printf("The triangle is valid");
	}
	else{
		printf("The triangle is not valid");
	}
	
	printf("\n\nLab No.:3.9\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}