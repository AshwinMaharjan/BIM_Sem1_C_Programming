/*
take 2 string input from user and compare if the enetered 
string are identical or not. if identical print "Wonderful" otherwise "What a disaster"
*/

#include<stdio.h>
int main(){
	char str1[10];
	char str2[10];
	int result;
	
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	
	result=strcmp(str1,str2);
	if(result==0){
		printf("Wonderful");
	}
	else{
		printf("What a disaster");
	}
		printf("\n\nLab No: 8.7\tName: Ashwin Maharjan\tRoll No: 5");
	return 0;
}