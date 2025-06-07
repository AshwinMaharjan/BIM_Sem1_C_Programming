//wap to read the string and find the length using strlen()
#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	int result; 
	
	printf("Enter the string: ");
	gets(string);
	
	result=strlen(string);
	
	printf("The length of entered string is %d",result);
	
	
	return 0;
}