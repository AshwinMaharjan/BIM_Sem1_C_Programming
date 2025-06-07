/*
2
4	6
8	10	12
14	16	18	20
*/

#include<stdio.h>
int main(){
	int i,j;
	for(i=2; i<=10; i++){
		for(j=2; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
