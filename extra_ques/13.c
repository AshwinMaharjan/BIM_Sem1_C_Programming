//wap to print the multiples of 5 less than 100
#include<stdio.h>
int main(){
	int i;
	int num=5;
	printf("The multiple of 5 less than 100: \n\n");
	for(i=1;i<=20;i++){
		printf("%d \t * \t %d \t = \t %d\n",num,i,(num*i));
	}

	return 0;
}