//wap to swap two floating number using call by reference
#include<stdio.h>
int swap(float *x, float *y); //function declaration
int main(){
	float a,b;
	printf("Enter the value for a: ");
	scanf("%f",&a);
	printf("Enter the value for b: ");
	scanf("%f",&b);
	
	printf("\nBefore swapping: x = %.2f and y = %.2f",a,b);
	swap(&a,&b); //function call
	printf("\n\nAfter swapping: x = %.2f and y = %.2f",a,b);
	
	return 0;
}
//function defintion
int swap(float *x, float *y){
	int temp;	
		temp = *x;
		*x = *y;
		*y = temp;
}