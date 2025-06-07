//realloc function
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int i;
	//malloc
	ptr=(int*)malloc(5*sizeof(int));
	printf("Enter the 5 numbers for malloc function:\n");
	for(i=0;i<5;i++){
		scanf("%d",&ptr[i]);
	}
	//realloc	
	ptr=(int*)realloc(ptr,7*sizeof(int));
	printf("\nEnter the 7 numbers for realloc function:\n");
	for(i=0;i<7;i++){
		scanf("%d",&ptr[i]);
	}
	//printing the numbers
	printf("The elements are: ");
	for(i=0;i<7;i++){
		printf("%d ",ptr[i]);
	}
	free(ptr);
	
			printf("\n\nLab No: 9.10\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}

