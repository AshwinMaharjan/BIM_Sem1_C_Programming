/*
create array of size 20 and take all the elements
from the user and display all the elements that have even indices

*/


#include<stdio.h>
int main(){
	int i;
	int arr[20];
	
	for(i=0;i<20;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d",&arr[i]);
	}
		printf("The elements with even indices: ");
		for(i=0;i<20;i++){
			if(i%2==0){
				printf("%d ", arr[i]);
		}
}
	printf("\n\nLab No: 6.4\tName: Ashwin Maharjan\tRoll No: 5");


	return 0;
}