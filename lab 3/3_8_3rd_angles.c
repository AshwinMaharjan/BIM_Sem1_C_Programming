//to find the third angle of a triangle
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first angle of a triangle:");
	scanf("%d",&a);
	printf("Enter the second angle of a triangle:");
	scanf("%d",&b);
	
	/*
	a+b+c=180
	c=180-a-b
	*/
	
	c=180-a-b;
	printf("The third angle of a triangle is %d degree",c);
	printf("\n\nLab No.:3.8\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}