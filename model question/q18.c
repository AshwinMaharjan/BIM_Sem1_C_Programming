//How array can be passed as function arguments? Illustrates with suitable example

#include<stdio.h>

void printNum(int arr[],int n);

int main(){
	int i;
	int arr[10];
	printf("Enter the values for array: ");
	for(i=0;i<=10;i++){
		scanf("%d",&arr[i]);
	}
	printNum(arr,7);
	
	return 0;
}

void printNum(int arr[],int n){
	int i;
	printf("The entered numbers are: ");
	for(i=0;i<=n;i++){
		printf("%d ",arr[i]);
	}
}