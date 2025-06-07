//11.1 Create a file named Test1.txt, then write "I am a BIM student using fputc().
#include<stdio.h>
int main(){
	FILE * fptr=fopen("Test1.txt","w");
	char character[100]="I am a BIM student";
	int i;
	
	for(i=0;character[i]!='\0';i++){
		fputc(character[i],fptr);
	}
			printf("\n\nLab No: 11.1\tName: Ashwin Maharjan\tRoll No: 5");

//	while(character!='\0'){
//		fputc('I am a BIM student',fptr);
//		character++;
//	}
	
	fclose(fptr);
	return 0;
}