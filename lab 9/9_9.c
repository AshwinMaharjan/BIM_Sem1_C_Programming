//calloc function
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int i;
	ptr=(int*)calloc(5,sizeof(int));
	
	printf("The numbers are: ");
	for(i=0;i<5;i++){
		printf("%d ",ptr[i]);
	}
			printf("\n\nLab No: 9.9\tName: Ashwin Maharjan\tRoll No: 5");

	free(ptr);

	return 0;
	
}

