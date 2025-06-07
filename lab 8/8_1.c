//Take a string from the user and change case from uppercase to lowercase and vice versa

#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	char character;
	int i;
	printf("Enter a string: ");
//	scanf("%s", string);
	gets(string);
	
//	string[i]=fgetc(string);
	for(i=0;i<strlen(string);i++){
		if(string[i]>='A' && string[i]<='Z'){
			string[i]=string[i]+32;
		}
		else if(string[i]>='a' && string[i]<='z'){
			string[i]=string[i]-32;

//			printf("%c",character);
		}
	}
	printf("After changing the string: %s",string);
//	printf("%s",string);

			printf("\n\nLab No: 8.1\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}