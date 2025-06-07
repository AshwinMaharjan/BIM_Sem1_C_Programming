//8.8 relationship between pointer and character string

#include<stdio.h>
int main(){
	int i=0;
	char string[100]; //declaration of a string
	printf("Enter a string: ");
	gets(string); //take a string from the user
	
	printf("The entered string is: ");
	
	while(string[i]!='\0'){ //
		printf("%c",*(string+i)); // * will points to the first character and add the size by 1
		i++; //increase the value of i by 1 i.e. i=i+1
	}	
		printf("\n\nLab No: 8.8\tName: Ashwin Maharjan\tRoll No: 5");
	return 0;
}

