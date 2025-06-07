#include<stdio.h>
int main(){
	float P,T,R,SI;
	printf("Enter the principal:");
	scanf("%f", &P);
	printf("Enter the time:");
	scanf("%f", &T);
	printf("Enter the rate:");
	scanf("%f", &R);
	SI=(P*T*R)/100;
	printf("The simple interest is Rs. %f", SI);
	
	printf("\n\nLab No: 1.6\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}
