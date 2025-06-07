/*
count the total num of uppercase and lowercase 
character in the string entered by the user
*/

#include<stdio.h>
int main(){
	int i;
	char string[100];
	char upper_case, lower_case;
	
	printf("Enter a string in alphabets: ");
	gets(string);
	
	for(i=0;i<(strlen(string));i++){
		if(string[i]>='A' && string[i]<='Z'){
			upper_case++;
		}
		else{
			lower_case++;
		}
	}
	printf("\nThe total number of upper case is: %d",upper_case);
	printf("\nThe total number of lower case is: %d",lower_case);
	
			printf("\n\nLab No: 8.6\tName: Ashwin Maharjan\tRoll No: 5");

	
	return 0;
}
