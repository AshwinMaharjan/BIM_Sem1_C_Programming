//Demonstrate the use of various string handling functions
#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[] = "First Semester";
	char str2[] = " College";
	char dest[50] = "Prime";
	char source[] = "Nayabazar";
	
	//strlen: This function gives the number of characters as an output, excluding the terminating null character
	int len = strlen(str1);
    printf("strlen: Length of string: %d", len);

	//strcat: This function combines two strings together to form a whole string
   	strcat(dest, str2);
    printf("\nstrcat: Combined string: %s", dest);
    
    //strcmp(): This function is used to compare two strings and determine whether they are equal or greater or lesser
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("\nstrcmp: The two strings are equal");
    } 
	else if (result > 0) {
        printf("\nstrcmp: The first string is greater");
    } 
	else {
        printf("\nstrcmp: The second string is greater");
    }
    
    //strrev(): This function reverse the given string
    strrev(str1);
    printf("\nstrrev: Reversed string: %s", str1);
    
    //strcpy(): This function is used to copy the string from source to destination
    strcpy(dest, source);
    printf("\nstrcpy: Copied string: %s", dest);

	//strlwr: This function changes uppercase string to lowercase string
    char *result2 = strlwr(str2);
    printf("\nstrlwr: Lowercase string:%s", result2);
	
	//strupr: This function changes lowercase string to uppercase string
    char *result3 = strupr(str2);
    printf("\nstrupr: Uppercase string:%s", result3);
    
    	printf("\n\nLab No: 7.1\tName: Ashwin Maharjan\tRoll No: 5");

    
	return 0;
}
