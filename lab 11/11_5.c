/*
11.5 Program to open a file and count number of new line, 
full stop, whitespace and display the report.

	E.g.: 
	New line: 10
	Full stop: 20 
	White spaces: 100
*/
#include<stdio.h>
int main(){
	char character;
	int NewLine=0;
	int FullStop=0;
	int WhiteSpaces=0;
	
	FILE*fptr=fopen("random.txt", "r");

	character=fgetc(fptr);
	while(character!=EOF){
		if(character=='\n'){
			NewLine++;
		} else if(character=='.'){
			FullStop++;
		} else if(character==' '){
			WhiteSpaces++;
		}
	character=fgetc(fptr);
	}
	
	printf("New Line: %d\n",NewLine);
	printf("White Spaces: %d\n",WhiteSpaces);
	printf("Full Stop: %d\n",FullStop);
	
	printf("\n\nLab No: 11.5\tName: Ashwin Maharjan\tRoll No: 5");

	
	fclose(fptr);	
	
	return 0;
}