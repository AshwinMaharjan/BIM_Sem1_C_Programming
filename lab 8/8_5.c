//count the total number of words in a string entered by the user

#include<stdio.h>
int main(){
	char string[100];
	int length;
	
		printf("Enter a string: ");
	gets(string);
	
	while(string[length]!='\0'){
		length++;
	}
	
	printf("The total number of words in a string is: %d", length);
	
				printf("\n\nLab No: 8.5\tName: Ashwin Maharjan\tRoll No: 5");

	
	return 0;
}