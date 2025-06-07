//prime
#include<stdio.h>
int main(){    
	int n,i,m=0,flag=0;    

	printf("Enter any number:");    
	scanf("%d",&n);    
	m=n/2;    
	
	for(i=2;i<=m;i++){
	   	if(n%i==0){    
			printf("The entered number is not prime");    
			flag=1;    
			break;    
			}    
		}    
		
		if(flag==0){
			printf("The entered number is prime");    
		}
		
		
			printf("\n\nLab No: 4.10\tName: Ashwin Maharjan\tRoll No: 5");

		return 0;  
	 } 