//program to illustrate the bitwise shift operator
#include<stdio.h>
int main(){
	int a=14; //binary of 14 is 1110 
	int b=24; //binary of 24 is 11000 
	int left, right;	
		
	left=a<<2;
	//left shift operator shifts the bits of a to the left by 2
	printf("The value of left shift operator is %d", left);
	
	right=b>>3;
	//right shift operator shifts the bits of b to the right by 3
	printf("\nThe value of right shift operator is %d", right);
	
	printf("\n\nLab No: 2.9\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;

}