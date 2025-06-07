#include<stdio.h>
int main(){
	int l,b,area,perimeter;
	printf("Enter the length of rectangle:");
	scanf("%d", &l);
	printf("Enter the breadth of rectangle:");
	scanf("%d", &b);
	
	area=l*b;
	perimeter=2*(l+b);
	
	printf("Area of rectangle is %d\n", area);
	printf("Perimeter of rectangle is %d", perimeter);
	printf("\n\nLab No: 1.10\tName: Ashwin Maharjan\tRoll No: 5");

	
	return 0;
}