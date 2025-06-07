/*
Create a two dimensional array and initialize value on 
declaration and display the array in matrix format. 
*/

#include<stdio.h>
int main(){
	int i, j;
	int a[3][2]={{1,2},{3,4},{5,6}};
	
	printf("The array in matrix format:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ", a[i][j]);
		}
			printf("\n");
	}

	printf("\n\nLab No: 6.10\tName: Ashwin Maharjan\tRoll No: 5");


	return 0;
}