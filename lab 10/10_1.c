/*
10.1 Define a structure named Student with roll number, name and address, 
marks of 5 subjects as the members. Create 5 student variables and take 
data/details from the user. Then prints only those student who have odd 
roll number and whose address is KTM and whose name starts with R and have 
total marks obtained more than 400. (Use concept of passing structure to 
function and pointer to structure wherever necessary)
*/
#include<stdio.h>
#include<string.h>
struct Student{
	int roll,marks;
	char name[100];
	char address[100];
};
int main(){
	struct Student s[5];
	int i;
	for(i=0;i<5;i++){
		printf("\nEnter the student roll:");
		scanf("%d",&s[i].roll);
		printf("Enter the student name:");
		scanf("%s",s[i].name);
		printf("Enter the student address:");
		scanf("%s",s[i].address);
		printf("Enter the student marks:");
		scanf("%d",&s[i].marks);
	}	
	
	/*prints only those student who have odd 
	roll number and whose address is KTM and whose name starts with R and have 
	total marks obtained more than 400
	*/
	printf("\nDisplaying the information of student: ");
	for(i=0;i<5;i++){
		if(s[i].roll%2!=0 && (strcmp(s[i].address,"KTM")==0) && s[i].name[0] == 'R' && s[i].marks>400){
			printf("\nStudent Roll: %d\n",s[i].roll);
			printf("Student Name: %s\n",s[i].name);
			printf("Student Address: %s\n",s[i].address);
			printf("Student Marks: %d\n",s[i].marks);
		}
	}
	
			printf("\n\nLab No: 10.1\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}