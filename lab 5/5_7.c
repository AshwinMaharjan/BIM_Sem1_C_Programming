//pyramid
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<4;i++){
		for(k=4;k>i;k--){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			printf("$ ");
		}
		for(j=1;j<=i;j++){
			printf("$ ");
	}
		printf("\n");
}
	printf("\n\nLab No: 5.7\tName: Ashwin Maharjan\tRoll No: 5");


	return 0;
}