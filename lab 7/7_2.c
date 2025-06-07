//Illustrate the different components of a user-defined function

/*
1. Function Declaration: A function declaration in C is a prototype of a function 
that specifies the function's name, return type, and parameter list. 
It tells the compiler about the function's existence before the function 
is actually defined in the code. The prototype is used to enable the compiler 
to perform type checking and generate code for function calls.
Syntax: return_type function_name(parameter_list);

2. Function Call: A function call in C is a statement that invokes a specific function and executes 
the code within the function's body. A function call consists of the function name, 
the parentheses enclosing the argument list, and optionally, the return value of the 
function can be assigned to a variable.
Syntax: return_value = function_name(argument_list);

3. Function Definition: A function definition in C is a block of code that specifies 
the instructions to be executed when the function is called. It consists of the function header, 
which includes the function name, return type, and parameter list, and the function body, 
which contains the statements to be executed when the function is called. 
Syntax: return_type function_name(parameter_list) {
		    statement 1;
		    statement n;
		    return return_value;
		}
*/
#include <stdio.h>
int add(int, int); // Function declaration

int main() {
    int x = 10, y = 20, sum;    
    sum = add(x, y); // Function call
    printf("The sum of %d and %d is %d", x, y, sum);
    	printf("\n\nLab No: 7.2\tName: Ashwin Maharjan\tRoll No: 5");
	return 0;
}

// Function definition
int add(int a, int b) {
    return (a+b);
}
