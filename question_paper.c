#include<stdio.h>
int main(){
	int count = 10;
	printf("%d\n", count++);
	printf("%d\n", ++count/2);
	printf("%d\n", ++count);
	count=100 * 1.5;
	printf("%d\n", count--);
	printf("%d\n", --count+200);
	return 0;
}