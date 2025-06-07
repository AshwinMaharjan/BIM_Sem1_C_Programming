//copying the string from one to another in reverse form
#include<stdio.h>
int main(){
	char string[100];
	char reverse[100];
	int length=0;
	int i;
	
	printf("Enter the string: ");
	gets(string);
		
	while(string[length]!='\0'){
		for(i=0;i<=length;i++){
			reverse[i]=string[length-i];
		}						
		length++;
	}
	
	printf("\n\nThe entered string: %s",string);
	printf("\nThe string in reverse form: %s",reverse);
	
	return 0;
}