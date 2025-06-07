/*
read two numbers such as num1 and num2 and 
display all the even numbers from num1 to num2
*/
#include<stdio.h>
int main(){
	int num1, num2, even;
	int i,count=0;
	
	printf("Enter the value for num1: ");
	scanf("%d",&num1);
	printf("Enter the value for num2: ");
	scanf("%d",&num2);
	
	printf("\nThe even numbers from %d to %d are:\n",num1,num2);
	for(i=num1;i<=num2;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	
	for(i=num1;i<=num2;i+=2){
		count++;
	}
	printf("\nThe frequency of even numbers from %d to %d is %d",num1,num2,count);
	printf("\n\nLab No: 5.2\tName: Ashwin Maharjan\tRoll No: 5");
		
	return 0;
}