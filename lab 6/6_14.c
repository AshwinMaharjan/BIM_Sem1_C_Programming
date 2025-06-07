//A*B

#include<stdio.h>
int main(){
	int i,j,k;
	int A[3][3]={{4,5,8},{2,4,7},{8,3,9}};
	int B[3][3]={{1,7,5},{3,6,5},{8,1,2}};
	int C[3][3]={0};
	
	printf("Matrix A:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",A[i][j]);
		}
			printf("\n");
	}
	
	printf("\nMatrix B:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",B[i][j]);
		}
			printf("\n");
	}
	
	//matrix multiplication
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("\nMatrix A*B:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", C[i][j]);
		}
			printf("\n");
	}

	printf("\n\nLab No: 6.14\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}