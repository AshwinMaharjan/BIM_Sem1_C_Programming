//Write a program that takes string as input and displays the length of it
#include<stdio.h>
int main(){
	char string[100];
	int length=0;
	
	
	printf("Enter a line of text: ");
	gets(string);
	
	while(string[length]!='\0'){
		length++;
	}
	printf("The length of entered string is: %d",length);
	
	return 0;
}