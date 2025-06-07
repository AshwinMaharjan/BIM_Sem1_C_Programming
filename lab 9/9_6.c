//9.6 Demonstrate the concept of null and void pointer.
#include<stdio.h>
int main(){
	//null pointer
	int *ptr1 = NULL;
	printf("The value of ptr1 is: %d",ptr1);
	
	//void pointer
	void * ptr2; //ptr2 can hold pointer to any type
	int a=10;
	float b=5.5;
	char c='A';
	
	ptr2=&a; // ptr2 points to int type without casting
	printf("\nThe value of a is %d",*(int*)ptr2); 
	
	ptr2=&b; // ptr2 points to float type without casting
	printf("\nThe value of b is %f",*(float*)ptr2); 
	
	ptr2=&c; // ptr2 points to char type without casting
	printf("\nThe value of c is %c",*(char*)ptr2); 
	
  			printf("\n\nLab No: 9.6\tName: Ashwin Maharjan\tRoll No: 5");
		
	return 0;
}