//10.5 Demonstrate the concept of nested structure
#include <stdio.h>
struct organization{
	char org_name[100];
	int org_num;
	
struct employee{
	int emp_id;
	char emp_name[100];
	int emp_salary;
	
	} emp;
};

int main(){
	struct organization org;
	
	//organization details
	printf("Enter the organization name: ");
	scanf("%s",org.org_name);
	printf("Enter the organization number: ");
	scanf("%d",&org.org_num);
		
	//employee details
	printf("\nEnter the employee id: ");
	scanf("%d",&org.emp.emp_id);
	printf("Enter the employee name: ");
	scanf("%s",org.emp.emp_name);
	printf("Enter the employee salary: ");
	scanf("%d",&org.emp.emp_salary);
	
	// Printing the details
	printf("\nDetails of Organization:\n");
	printf("Organization Name: %s\n",org.org_name);
	printf("Organization Number: %d\n",org.org_num);
	
	printf("\nDetails of Employee:\n");
	printf("Employee ID: %d\n",org.emp.emp_id);
	printf("Employee Name: %s\n",org.emp.emp_name);
	printf("Employee Salary: %d\n",org.emp.emp_salary);
	
	
		printf("\n\nLab No: 10.5\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;	
}
