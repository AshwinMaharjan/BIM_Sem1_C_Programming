/* 
WAP to create array of n employees and store their respective id, name and salary.
Then display data of only those employees that have even id and 
that have salary higher than 50,000
*/

#include<stdio.h>
struct employee{
	int id;
	char name[20];
	int salary;
};

	int main(){
		int i, n;
			printf("How many employees you want to store?: ");
			scanf("%d", &n);
			struct employee emp[n];
				
				for(i=0; i<n; i++){
					printf("Enter the employee id:");
					scanf("%d",&emp[i].id);
					printf("Enter the employee name:");
					scanf("%s",&emp[i].name);
					printf("Enter the employee salary:");
					scanf("%d",&emp[i].salary);
					printf("\n");
		}
			for(i=0; i<n; i++){
				if(emp[i].id % 2 == 0 && emp[i].salary > 50000){
					printf("%d\t%s\t%d\n",emp[i].id, emp[i].name, emp[i].salary);
		}
	}
			return 0;
}