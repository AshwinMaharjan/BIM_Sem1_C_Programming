/*
demonstrate the use of various string handling functions 
such as strlen() sttrev() strcmp() strcat() strlwr() strupr(). 
also use gets() and puts() to take string input from user and 
print string to the console
*/

#include<stdio.h>
#include<string.h>
int main(){
	char str1[100];
	char str2[100];
	
	//gets() to scan the entered string from the user
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	
	//puts() to print the entered string to the console
	printf("\nThe entered first string is: ");
	puts(str1);
	printf("The entered second string is: ");
	puts(str2);

	//strlen() to find the length of a string
	printf("\nThe length of the first string is %d",strlen(str1));

	//strlwr() to convert the string into a lowercase
	strlwr(str2);
	printf("\nThe lowercase of the second string is %s",str2);
	
	//strupr() to convert the string into a uppercase
	strupr(str2);
	printf("\nThe uppercase of the second string is %s",str2);

	//strcat() to form two strings into a one whole string
	strcat(str1,str2);
	printf("\nThe concatenated string is %s",str1);
	printf("\n\nLab No: 8.3\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}