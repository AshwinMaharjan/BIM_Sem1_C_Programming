/*
11.2 Open a file named Test1.txt, then read the content of the file using fgetc(). 
Also copy all the content of the Text1.txt to another file named backup.dat.
*/
#include<stdio.h>
int main(){
	FILE * fptr1 =fopen("Test1.txt","r");
	FILE * fptr2 =fopen("backup.dat","w");
	char character;
	
	printf("The entered content is: ");
	character=fgetc(fptr1); //reads 1st character
	while(character!=EOF){
		printf("%c",character);
		character=fgetc(fptr1); //reads next character
	}
	//copying the content of "Test.txt" to "backup.dat"
	character=fgetc(fptr1); //reads 1st character
	while(character!=EOF){
		fputc(character, fptr2);
		character=fgetc(fptr1);
	}
	
			printf("\n\nLab No: 11.2\tName: Ashwin Maharjan\tRoll No: 5");

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}