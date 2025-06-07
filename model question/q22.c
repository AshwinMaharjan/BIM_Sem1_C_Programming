/*Create a structure “Student” having data members name, roll_nmber and percentage
Write a program to display the name of all students having percentage greater than or equal to 80.
*/

#include<stdio.h>
struct student{
	char name[100];
	int roll;
	float percentage;
};
int main(){
	int i;
	struct student s[10];
	for(i=0;i<3;i++){
		printf("Enter the student name: ");
		scanf("%s",&s[i].name);
		printf("Enter the student roll: ");
		scanf("%d",&s[i].roll);
		printf("Enter the student percentage: ");
		scanf("%f",&s[i].percentage);
	}
	
	printf("\nThe students who secured more than 80%%:\n");
	for(i=0;i<3;i++){
		if(s[i].percentage>=80){
			printf("Name: %s\n",s[i].name);
			printf("Roll: %d\n",s[i].roll);
			printf("Percentage: %.2f\n",s[i].percentage);
		}
	}
	return 0;
}