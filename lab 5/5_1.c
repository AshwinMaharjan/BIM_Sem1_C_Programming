/*
break is used to immediately exit a loop, 
regardless of whether the loop's condition has been met or not. 
When a break statement is encountered inside a loop, 
the loop is terminated and program control is transferred 
to the statement immediately following the loop.

continue is used to skip over the current iteration of a loop and 
move on to the next iteration. 
When a continue statement is encountered inside a loop, 
the remaining statements in the loop's block are skipped 
and program control is transferred back to the loop's condition check.
*/

#include<stdio.h>
int main(){
	int i;
	printf("Result before using break: ");
	for(i=0;i<=10;i++){
		printf("%d ",i);
	}
	printf("\nResult after using break: ");
	for(i=0;i<=10;i++){
		if(i==5){
			break; //when i becomes 3, it will end the if statement and print the result 
		}
			printf("%d ",i);
	}
	
	printf("\n\nResult before using continue: ");
	for(i=0;i<=10;i++){
		printf("%d ",i);
	}
	printf("\nResult after using continue: ");
	for(i=0;i<=10;i++){
		if(i==5){
			continue; //when i becomes 3, it will skip 3 and goes back to loop's condition check
		}
		printf("%d ",i);
	}
	
	printf("\n\nLab No: 5.1\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}