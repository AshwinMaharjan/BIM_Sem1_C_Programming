//Write a program to read a line of text and display the number of vowels in it.

#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	int i, vowels=0,length=0;
	
	printf("Enter a line of text: ");
	gets(string);
	
	for(i=0;i<string[length]!='\0';i++){
		if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || 
			string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U') {
				vowels++;
	}
}
	printf("The total number of vowels: %d",vowels);	
	

	return 0;
}