/*
Create an array containing the following elements and ask user to enter a number. 
If the entered number is in the array then print "Element found at index ..." 
otherwise display "Element not found". { -10, 10, 15, 25, 55, 150, 190, 201, 220, 250} 
*/

#include<stdio.h>
int main(){
	int arr[10]={ -10, 10, 15, 25, 55, 150, 190, 201, 220, 250};
	int i,n;
	int flag = -1;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	for(i=0; i<10; i++){
		if(arr[i]==n){
				flag=i;
				break;
			}
	}
		if(flag!=-1){
			printf("Element found at index %d",flag);
	}
		else{
			printf("Element not found");
	}
	printf("\n\nLab No: 6.6\tName: Ashwin Maharjan\tRoll No: 5");


		return 0;

	
}