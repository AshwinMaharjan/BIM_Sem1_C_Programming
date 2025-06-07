//malloc function
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int i;
	ptr=(int*)malloc(5*sizeof(int));
	
	printf("Enter the numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&ptr[i]);
	}
	
	printf("The entered numbers are: ");
	for(i=0;i<5;i++){
		printf("%d ",ptr[i]);
	}
		printf("\n\nLab No: 9.8\tName: Ashwin Maharjan\tRoll No: 5");
	
	free(ptr);

	return 0;
	
}