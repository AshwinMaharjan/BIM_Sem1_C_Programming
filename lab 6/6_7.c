/*
Take 10 integers from user, store them in an array and 
display the smallest integer among them. 
*/

#include<stdio.h>
int main(){
	int i, arr[10], smallest;
	for(i=0;i<10;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
}
	}
	printf("The smallest integer is: %d",smallest);

	printf("\n\nLab No: 6.7\tName: Ashwin Maharjan\tRoll No: 5");
	
	return 0;
}