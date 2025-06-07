/*
count the total num of alpha, digits, or special character 
in sentence entered by the user
*/

#include<stdio.h>
int main(){
	int i;	
	char string[100];
	char alpha, digits, special_character;
	printf("Enter a sentence: ");
	gets(string);
	
	for(i=0;i<(strlen(string));i++){
	if(string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z'){
		alpha++;
	}
	else if(string[i]>='0' && string[i]<='9'){
		digits++;
	}
	else{
		special_character++;
	}
}
	printf("\nNumber of alphabets: %d",alpha);
	printf("\nNumber of digits: %d",digits);
	printf("\nNumber of special character: %d",special_character);
	
	printf("\n\nLab No: 8.4\tName: Ashwin Maharjan\tRoll No: 5");

		
	return 0;
}
