//wap to sort the numbers in an array
#include<stdio.h>
int main(){
	int arr[10];
	int i,j,tmp;

	for(i=0;i<10;i++){
		printf("Enter the elements for %d numbers: ",i+1);
		scanf("%d",&arr[i]);
	}

	//sorting
	for(i=0;i<10-1;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	printf("\nThe entered numbers are: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}