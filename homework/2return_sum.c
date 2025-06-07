#include<stdio.h>
int sumInt(int a,int b,int c,int d){
	int sum;
	sum=a+b+c+d;
	printf("Sum is %d",sum);
	return sum;
}
int main(){
	sumInt(10,20,30,40);
	return 0;
	
}