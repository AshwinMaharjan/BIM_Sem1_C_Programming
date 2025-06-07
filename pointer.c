#include<stdio.h>
int main(){
	int a=24;
	int * ptrA = &a;
	int ** ptrB = &ptrA;
	
	printf("a: %d\n",a);
	printf("ptrA: %d\n",ptrA);
	printf("ptrB: %d\n\n",ptrB);
	
	printf("&a: %d\n",&a);
	printf("&ptrA: %d\n",&ptrA);
	printf("&ptrB: %d\n\n",&ptrB);
	
	printf("*&ptrB: %d\n",*&ptrB);
	printf("*ptrB: %d\n",*ptrB);
	printf("**ptrB: %d\n\n",**ptrB);
	
	
	
	return 0;
}