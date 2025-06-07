/*Read a line of text and replace all the occurrence of 
character 'a' with character 'z'. 
Then display the result before and after the modification
*/

#include<stdio.h>
int main(){
	char line[100];
	int i=0;
	printf("Enter a line: ");
//	scanf("%s",line);
	gets(line);
	printf("Before modification: %s\n",line);

	while(line[i]!='\0'){
		if(line[i]=='a'){
			line[i]='z';
		}
		i++;
	}
	
//	printf("\nAfter modification: %s",line);
	printf("After modification: ");
	
	puts(line);

	printf("\n\nLab No: 7.14\tName: Ashwin Maharjan\tRoll No: 5");
		
	return 0;
}