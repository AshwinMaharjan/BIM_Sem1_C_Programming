/*
Create a function that takes two argument such as x and n 
where x can be any integer and x is the power raised to the number n
*/
#include<stdio.h>
void power(int, int);
int main(){
	int n, x, result;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of x: ");
	scanf("%d",&x);
	power(n,x);
	
    	printf("\n\nLab No: 7.5\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}
void power(int n, int x){
	int i, result=1;
	for(i=1;i<=x;i++){
		result=result*n;
	}
	printf("The %d to power %d is %d",n,x,result);
}