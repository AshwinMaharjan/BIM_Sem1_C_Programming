/*
week day using switch case
*/

#include<stdio.h>
int main(){
	int day;
	printf("Enter the day number of a week:");
	scanf("%d", &day);
	switch(day){
		case(0):
			printf("Sunday");
			break;
		case(1):
			printf("Monday");
			break;
		case(2):
			printf("Tuesday");
			break;
		case(3):
			printf("Wednesday");
			break;
		case(4):
			printf("Thursday");
			break;
		case(5):
			printf("Friday");
			break;
		case(6):
			printf("Saturday");
			break;
		default:
			printf("Invalid day");			
	}
	printf("\n\nLab No.:3.13\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}