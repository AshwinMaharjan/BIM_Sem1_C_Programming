//uppercase, lowercase, digit or special character
#include<stdio.h>
int main(){
	char alpha;
	printf("Enter any character:");
	scanf("%c",&alpha);
	
	if(alpha>='A' && alpha<='Z'){
		printf("\nIt is an uppercase alphabet.");
	}
	else if(alpha>='a' && alpha<='b'){
		printf("\nIt is a lowercase alphabet.");
	}
	else if(alpha>='0' && alpha<='9'){
		printf("\nIt is a digit.");
	}
	else{
		printf("\nIt is a special character.");
	}
	printf("\n\nLab No.:3.4\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}

