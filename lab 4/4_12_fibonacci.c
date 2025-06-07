//fibonacci upto nth elements
#include<stdio.h>
int main(){
	int i, n, t1=0, t2=1, t3;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The fibonacci series of %d is: ",n);
	for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
	printf("\n\nLab No: 4.12\tName: Ashwin Maharjan\tRoll No: 5");

	
	return 0;
} 