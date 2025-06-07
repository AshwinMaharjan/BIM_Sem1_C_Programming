//program to demonstrate the use of getch(),getche(),putch()
#include<stdio.h>
#include<conio.h>
int main(){
	char letter1, letter2 ;
	printf("Enter the first letter: ");
	letter1=getche(); 
	//its reads a character as input from the user
	printf("\nEnter the second letter: ");
	letter2=getch(); 
	//it reads one character and displays it immediately without the character having to wait for enter key
	
	printf("\nThe entered first letter is: ");
	putch(letter1); //it displays a character on the screen
	printf("\nThe entered second letter is: ");
	putch(letter2);
	
	printf("\n\nLab No: 2.5\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}