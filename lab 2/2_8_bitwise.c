//program to illustrate the bitwise operator
#include<stdio.h>
int main(){
	int a=14; //binary of 14 is 1110 
	int b=24; //binary of 24 is 11000 
	
	//The result of bitwise AND is 1 if both the bits have a value 1, otherwise it is 0
	printf("The value is %d\n",a&b); 
	//The result of bitwise OR is 1 if either of the bits have value of 1, otherwise it is 0.
	printf("The value is %d\n",a|b); 
	//The result of bitwise XOR is 1 only if one of the bits have a value of 1, otherwise it is 0.
	printf("The value is %d\n",a^b);
	//The bitwise one's complement inverts all the bits represented by its operand i.e. 0 becomes 1 and 1 becomes 0
	printf("The value is %d\n",~a);

	printf("\n\nLab No: 2.8\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;

}