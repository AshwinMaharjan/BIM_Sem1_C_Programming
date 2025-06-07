//check if the triangle is equivalent, isoceles or scalene

#include<stdio.h>
int main(){
	
	int s1, s2, s3;
	printf("Enter three sides of a traingle:");
	scanf("%d%d%d",&s1, &s2, &s3);
	
	if(s1==s2 && s2==s3 && s1==s3){
		printf("The triangle is equivalent");
	}
	else if(s1==s2 || s2==s3 || s1==s3){
		printf("The triangle is isoceles");		
	}
	else{
		printf("The triangle is scalene");
	}
	
	printf("\n\nLab No.:3.15\tAshwin Maharjan \t Roll No.: 5");
	
	return 0;
}