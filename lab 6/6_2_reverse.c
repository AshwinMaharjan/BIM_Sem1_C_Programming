/*
read n number of values in an array and display it in reverse order
*/

#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number of values:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0; i<n; i++){
		printf("Enter the value of %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("\nReversed Order:");
		for(i=n-1; i>=0; i--){
			printf("%d ", arr[i]);
	}
	printf("\n\nLab No: 6.2\tName: Ashwin Maharjan\tRoll No: 5");


	return 0;
}