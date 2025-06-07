/*
Create a function that takes two argument such as x and n 
where x can be any integer and x is the power raised to the number n
*/
#include<stdio.h>
int power(int, int);
int main(){
	int n, x, result;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	result=power(n,x);
	printf("The %d to power %d is %d",n,x,result);
	return 0;
}
int power(int n, int x){
	int i, result=1;
	for(i=1;i<=x;i++){
		result=result*n;
	}
	return result;
}