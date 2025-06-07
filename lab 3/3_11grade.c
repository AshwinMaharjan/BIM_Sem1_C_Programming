/*
finding the respective grade
A -> 80-100
B -> 60-79
C -> 40-59
F -> Below 40
*/

#include<stdio.h>
int main(){
	int sub1=60, sub2=70, sub3=70, sub4=90, sub5=90, total;
	float average;
	total=sub1+sub2+sub3+sub4+sub5;
	average=total/5;
	
	if(average>=100 && average<=80){
		printf("You have secured Grade A");
	}
	else if(average>=60 && average<=79){
		printf("You have secured Grade B");
	}
	else if(average>=40 && average<=59){
		printf("You have secured Grade C");
	}
	else if(average<40){
		printf("You have secured Grade F");
	}
	else{
		printf("Invalid. Please enter the data again");
	}
	printf("\n\nLab No.:3.11\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}