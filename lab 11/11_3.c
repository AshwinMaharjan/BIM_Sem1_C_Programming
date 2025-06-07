//Create a file named Test2.txt, then write "I am studying C Programming" using fputs().
#include<stdio.h>
int main(){
	FILE * fptr=fopen("Test2.txt","w");
	char string[100]="I am studying C Programming";
	
				printf("\n\nLab No: 11.3\tName: Ashwin Maharjan\tRoll No: 5");

	
	fputs(string,fptr);
	
	fclose(fptr);
	return 0;
}