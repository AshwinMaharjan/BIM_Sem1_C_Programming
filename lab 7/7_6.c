//Pass an array to a function and print all the elements of that array in the function
#include<stdio.h>
void array(int a[]); //function declaration
int main(){
	int a[5], i;
	for(i=0;i<5;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d",&a[i]);	
	}
	array(a); //passing an array
	printf("\n\nLab No: 7.6\tName: Ashwin Maharjan\tRoll No: 5");
	return 0;
}
//function definition
void array(int a[]){
	int i;
	printf("The entered elements are: ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}


