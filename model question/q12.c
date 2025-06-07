/*
Write a program that uses a while loop to compute and prints the sum of given numbers of
cubes. For example, if 3 is input, then the program should print 36, eg: 1^3+2^3+3^3=36
*/

#include<stdio.h>
int main(){
	int num,sum=0,count=0,cube;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	while(count<=num){
		cube=count*count*count;
		sum=sum+cube;
		count++;
	}
	
	printf("The required result is %d",sum);
	return 0;
}