/*
A function that calls itself is known as recursive function and this technique is
known as recursion in C programming. Recursion is more elegant and requires few
variables which make program clean. Recursion can be used to replace complex
nesting code by dividing the problem into same problem of its sub-type.
*/
//Find factorial of a given number using recursive function
#include<stdio.h>
int fact(int);
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num, fact(num));
     printf("\n\nLab No: 7.8\tName: Ashwin Maharjan\tRoll No: 5");
    return 0;
}

int fact(int num) {
    if (num==0)
        return 1; //base case
    else
        return (num*fact(num-1)); //recursive function
}
