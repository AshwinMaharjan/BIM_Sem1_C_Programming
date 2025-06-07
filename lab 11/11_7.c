/*
11.7 Define a structured named Employee with members such as employee id name and address.
Then create 5 Employee variables and take data for each employee from the console. 
Then write the details of all the employees in a file named Employee_Data.bin 
(Use fwrite() function)

*/
#include<stdio.h>
struct employee{
	int id;
	char name[100];
	char address[100];
};
int main(){
	int i;
	struct employee emp[5];
	FILE * fptr = fopen("Employee_Data.bin","wb");
	for(i=0;i<5;i++){
		printf("\nEnter the employee id: ");
		scanf("%d",&emp[i].id);
		printf("Enter the employee name: ");
		scanf("%s",emp[i].name);
		printf("Enter the employee address: ");
		scanf("%s",emp[i].address);
		
		fwrite(&emp[i],sizeof(struct employee),1,fptr); //to print the content in binary mode
	}
	
	fclose(fptr);
	
	FILE * fptr2 = fopen("Employee_Data.bin","rb");
	
	//printing the content from the file in console
	printf("\nDetails of the employee:\n");
	for(i=0;i<5;i++){
		fread(&emp[i],sizeof(struct employee),1,fptr2);
		
	printf("%d \t %s\t\t %s\n", emp[i].id, emp[i].name, emp[i].address);

	}
		printf("\n\nLab No: 11.7\tName: Ashwin Maharjan\tRoll No: 5");


	fclose(fptr2);

	return 0;
}