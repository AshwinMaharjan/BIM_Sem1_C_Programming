/*
Create a 2D array of size 2x3, take elements/values for that 2x3 array 
from the user and display the 2D array in matrix format. 
*/

#include<stdio.h>
int main(){
	int i, j;
	int a[2][3];
	
	printf("Enter the elements for 2x3 array:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		
			scanf("%d",&a[i][j]);
		}
	}
	printf("The entered elements in the form of matrix:\n");
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]);
			}
				printf("\n");
	}

	printf("\n\nLab No: 6.11\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}