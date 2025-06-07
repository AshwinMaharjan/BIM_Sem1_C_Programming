//determine the largest and smallest area of 3 circles
#include<stdio.h>
#define PI 3.14
int main(){
	float r1,r2,r3, area1, area2, area3;
	printf("Enter the radius of three circles: ");
	scanf("%f%f%f",&r1,&r2,&r3);
		
	area1=PI*r1*r1;
	printf("\nArea of 1st circle is %f\n",area1);

	area2=PI*r2*r2;
	printf("Area of 2nd circle is %f\n",area2);

	area3=PI*r3*r3;
	printf("Area of 3rd circle is %f\n",area3);
	
	//to calculate the smallest area
	if(area1<area2 && area1<area3){
		printf("\nArea of 1st circle is smallest");
	}
	else if(area2<area3){
		printf("\nArea of 2nd circle is smallest");
	}
	else{
		printf("\nArea of 3rd circle is smallest");
	}
	
	//to calculate the largest area
	if(area1>area2 && area1>area3){
		printf("\nArea of 1st circle is largest");
	}
	else if(area2>area3){
		printf("\nArea of 2nd circle is largest");
	}
	else{
		printf("\nArea of 3rd circle is largest");
	}	
	printf("\n\nLab No.:3.10\tAshwin Maharjan \t Roll No.: 5");
	return 0;
}

