#include<stdio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5,total,per;
	
	printf("Enter the marks 1st subject:");
	scanf("%d",&sub1);
	printf("Enter the marks 2nd subject:");
	scanf("%d",&sub2);
	printf("Enter the marks 3rd subject:");
	scanf("%d",&sub3);
	printf("Enter the marks 4th subject:");
	scanf("%d",&sub4);
	printf("Enter the marks 5th subject:");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	per=total/5;
	
	printf("\nThe total marks obtained is %d\n", total);
	printf("The percentage obtained is %d %%", per);
	
	printf("\n\nLab No: 1.7\tName: Ashwin Maharjan\tRoll No: 5");

	 
	return 0;
}