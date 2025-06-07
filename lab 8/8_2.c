#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	int length, i,pal=1;
	printf("Enter a string: ");
	gets(string);
	
	length=strlen(string);
	for(i=0;i<length;i++){
		if(string[i]!=string[length-i-1]){
			pal=0;
		}
	}
	if(pal==0){
		printf("The entered string is not palindrome");
	}
	else{
		printf("The entered string is a palindrome");		
	}
	
		printf("\n\nLab No: 8.2\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}