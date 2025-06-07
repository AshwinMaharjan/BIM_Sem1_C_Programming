//to check if it is vowel or consonant
#include<stdio.h>
int main(){
	char alpha;
	printf("Enter any alphabet:");
	scanf("%c", &alpha);
	
	if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U'){
		printf("The entered alphabet is vowels");
	}
	else{
		printf("The entered alphabet is consonant");
	}
		printf("\n\nLab No.:3.3\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}