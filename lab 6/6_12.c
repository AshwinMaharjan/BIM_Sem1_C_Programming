/*
Take elements of m x n array and display the array 
before and transposing the matrix
*/

#include<stdio.h>
int main(){
	int rows, columns, i,j;

	printf("Enter the rows you want to display: ");
	scanf("%d",&rows);
	printf("Enter the columns you want to display: ");
	scanf("%d",&columns);

	int arr[rows][columns];
	
	//User bata magne
	printf("Enter the elements for %d x %d:\n",rows,columns);
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	//User le deko lai display garne
	printf("Before transposing the array:\n");
		for(i=0;i<rows;i++){
			for(j=0;j<columns;j++){
				printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	//User le deko lai transpose garne
	printf("\nAfter transposing the array:\n");
		for(i=0;i<columns;i++){
			for(j=0;j<rows;j++){
				printf("%d ", arr[j][i]);
		}
		printf("\n");
	}	
	printf("\n\nLab No: 6.12\tName: Ashwin Maharjan\tRoll No: 5");


	return 0;
}