/*
Take 10 integers from user, store them in an array and 
display the largest integer among them. 
*/

#include<stdio.h>
int main(){
	int i, arr[10], largest;
	for(i=0;i<10;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]>largest){
			largest=arr[i];
}
	}
	printf("The largest integer is: %d",largest);
	
	printf("\n\nLab No: 6.8\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}