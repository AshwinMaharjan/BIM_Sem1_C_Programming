//5 subjects,store them in an array and display the average
#include<stdio.h>
int main(){
	int i,n[10],sum=0,average;
	
	for(i=0;i<5;i++){
		printf("Enter the marks of %d subjects: ",i+1);
		scanf("%d",&n[i]);
		sum=sum+n[i];
	}
	average=sum/5;
	printf("The average of entered subjects is %d",average);
	printf("\n\nLab No: 6.5\tName: Ashwin Maharjan\tRoll No: 5");
	
	return 0;
}