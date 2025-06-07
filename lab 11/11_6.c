/*

11.6 Create a file named employee_data.txt and write data of 5 employees in the following format. 
And then read the created file and read data of all the employees in the format mentioned. Format:

	100 Ram Kathmandu
	101 Hari Bhaktapur 
	[Use fprintf() and fscanf() functions]

*/
#include<stdio.h>
struct employee{
	int id;
	char name[100];
	char address[100];
};
int main(){
	struct employee emp[5];
	FILE*fptr=fopen("employee_data.txt","w");
	int i;
	
	//taking inputs from the users
	for(i=0;i<5;i++){
		printf("\nEnter name: ");
		scanf("%s",emp[i].name);
		printf("Enter id: ");
		scanf("%d",&emp[i].id);
		printf("Enter address: ");
		scanf("%s",emp[i].address);
	}
	
	//printing the details of employee in file
	for(i=0;i<5;i++){
		fprintf(fptr, "%d \t %s\t\t %s\n", emp[i].id, emp[i].name, emp[i].address);
	}
	
	fclose(fptr);

	FILE*fptr2=fopen("employee_data.txt","r");
	
	printf("\nDetails of the employee:\n");
	for(i=0;i<5;i++){
		//reading the content from the file	
		fscanf(fptr, "%d %s %s", &emp[i].id, &emp[i].name, &emp[i].address);

		//printing the details of the employee in the console
		printf("%d \t %s\t\t %s\n", emp[i].id, emp[i].name, emp[i].address);
	}
	printf("\n\nLab No: 11.6\tName: Ashwin Maharjan\tRoll No: 5");

	fclose(fptr2);
	return 0;
}