//9.4 Search a desired element in an array using pointers

#include<stdio.h>
int search(int *array, int desired); //function declaration
int main(){
	int array[10];
	int desired;
	int i, index;
	
	for(i=0;i<10;i++){
		printf("Enter the elements for the %d index: ",i);
		scanf("%d",&array[i]);
	}
	printf("\nEnter the desired element: ");
	scanf("%d",&desired);
	
	index=search(array,desired); //function call
	
	if(index!=-1){
		printf("\nYes, The element is at index %d",index);
	}
	else{
		printf("\nNo, The element is not at any index");
	}
				printf("\n\nLab No: 9.4\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}

//function definition
int search(int *array, int desired){
	int *ptr=array; //pointing to the 1st element of the array
	int i;
	for(i=0;i<10;i++){
		if(*ptr==desired){
			return i; //return i if the element is found
		}
		ptr++;
	}
	return -1; //return -1 if the element is not found
}