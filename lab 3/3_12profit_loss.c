/*
calculate profit or loss
*/

#include<stdio.h>
int main(){
	int SP, CP, P, L;
	printf("Enter the Selling Price:");
	scanf("%d", &SP);
	printf("Enter the Cost Price:");
	scanf("%d", &CP);
	
	if(SP<CP){
		L=CP-SP;
		printf("Thus, the loss is Rs. %d",L);
	}
	else if(SP>CP){
		P=SP-CP;
		printf("Thus, the profit is Rs. %d",P);
	}
	else{
		printf("Neither profit nor loss");
	}
	
	printf("\n\nLab No.:3.12\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}