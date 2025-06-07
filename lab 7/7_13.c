/*
7.13 Create a function to return the number of occurrence of the 
given character in a string where string and the character are 
supplied as argument for the function. 
*/

#include<stdio.h>
int occurrence(char *string, char a); //function declaration
int main(){
	char string[100];
	char a;
	int result;
	
	printf("Enter a character: ");
	scanf("%c",&a);
	
	printf("Enter a line of text: ");
//	gets(string);
	scanf("%s",string);
		
	result=occurrence(string, a);
	
	printf("The number of occurrence of %c is %d",a,result);
	
	printf("\n\nLab No: 7.13\tName: Ashwin Maharjan\tRoll No: 5");
	return 0;
}

//function definition
int occurrence(char *string, char a){
	int i=0;
	int count=0;
	while(string[i]!='\0'){
		if(string[i]==a){
			count++;
		}
		i++;
	}
	return count;
}