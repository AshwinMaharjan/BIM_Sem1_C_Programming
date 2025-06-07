/*11.4 Convert all the character from uppercase to lowercase and vice versa 
in a text file named Text1.txt
*/

#include<stdio.h>
int main(){
	FILE * fptr=fopen("Test1.txt","r");
	char character;
	
	printf("The required result is: ");	
	character=fgetc(fptr);
	while(character!=EOF){
		if(character>='A' && character<='Z'){
			character=character+32;
			printf("%c",character);
		}
		else if(character>='a' && character<='z'){
			character=character-32;
			printf("%c",character);
		}
		else{
			printf("%c",character);
		}
		character=fgetc(fptr);
	}
			printf("\n\nLab No: 11.4\tName: Ashwin Maharjan\tRoll No: 5");

	fclose(fptr);
	return 0;
}