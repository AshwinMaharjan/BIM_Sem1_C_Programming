#include<stdio.h>
void sumFloat(float a, float b);
int main(){
	sumFloat(10,20);
	sumFloat(100,200);
	return 0;
}
void sumFloat(float a, float b){
	float sum;
	sum=a+b;
	printf("Sum is %f\n",sum);
}