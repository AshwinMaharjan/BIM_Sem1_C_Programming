//Find the length of a given string without using strlen() function

#include<stdio.h>
int main(){
	char string[100];
	int length=0;
	
	printf("Enter a string: ");
	gets(string);
	
	while(string[length]!='\0'){
		length++;
	}
	
	printf("The length of entered string is %d", length);
				    	printf("\n\nLab No: 7.11\tName: Ashwin Maharjan\tRoll No: 5");
		
	return 0;
}