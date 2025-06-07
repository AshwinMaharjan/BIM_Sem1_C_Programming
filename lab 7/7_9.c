/*
1. Call by value:
In call by value method, a copy of actual arguments is passed into formal
arguments in the function definition. Any change in the formal parameters of the
function have no effect on the value of actual argument. Call by value is the default
method of passing parameters in C. Different memories are allocated for the formal
and actual parameters. 

2. Call by reference:
In call by reference method, the address of the variable is passed to the formal
arguments of a function. Any change in the formal parameters of the function will
effect the value of actual argument. Same memory location is accessed by the formal
and actual parameters.
*/

//call by value
#include <stdio.h>
void sum(int); //function declaration
int main() {
    int a = 5;
    sum(a); //call by value
    printf("Value of a outside function: %d", a);
                printf("\n\nLab No: 7.9\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}
//function definition
void sum(int a){
    a = a + 1;
    printf("Value of a inside function: %d\n", a);
}



