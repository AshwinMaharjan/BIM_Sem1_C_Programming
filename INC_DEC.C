#include<stdio.h>
#include<conio.h>
int main(){
	int a=5, b=6;
	printf("a=%d, b=%d\n",a,b);
	b=++a;
	printf("a=%d, b=%d\n",a,b);
	b=a++;
	printf("a=%d, b=%d\n",a,b);
	b=--a;
	printf("a=%d, b=%d\n",a,b);
	b=a--;
	printf("a=%d, b=%d\n",a,b);
	getch();
	return 0;
	}