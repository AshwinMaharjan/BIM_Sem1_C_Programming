//call by value
#include <stdio.h>
void swap(int a, int b) {
    int temp;
	temp = a;
    a = b;
    b = temp;
}
int main() {
    int x,y;

	printf("Enter the value for x: ");
	scanf("%d",&x);
	printf("Enter the value for y: ");
	scanf("%d",&y);
	
    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After swapping: x = %d, y = %d\n", x, y);
	printf("\n\nLab No: 7.10\tName: Ashwin Maharjan\tRoll No: 5");
    return 0;
}
