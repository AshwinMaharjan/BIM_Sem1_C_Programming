#include<stdio.h>
int main(){
	float cel, fah;
	printf("Enter the temperature in Celsius:");
	scanf("%f", &cel);
	
	fah = (cel * 1.8) + 32;
	printf("%f celsius is equivalent to %f fahrenheit",cel,fah);

	printf("\n\nLab No: 1.9\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}