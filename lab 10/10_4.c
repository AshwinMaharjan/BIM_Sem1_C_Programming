//10.4 Demonstrate the difference between structure and union.

#include<stdio.h>
struct student{
	int roll;
	char name[20];
	char address[20];
};
union employee{
	int id;
	char name[20];
	char address[20];
};

int main(){
	struct student s;
	union employee u;
	printf("size of int = %d bytes",sizeof(int));	
	printf("\nsize of char = %d bytes",sizeof(char));	
	printf("\nsize of s = %d bytes",sizeof(s));	
	printf("\nsize of u = %d bytes",sizeof(u));	
	
	  			printf("\n\nLab No: 10.4\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}