#include<stdio.h>
struct vehicle{
	int reg_num;
	char brand_name[100];
	int launched_year;
	int price;
};

int main(){
	struct vehicle Vehicle[3];
	FILE*fptr=fopen("Vehicles.dat","w");
	int i;
	
	//taking inputs from the users
	for(i=0;i<3;i++){
		printf("\nEnter the registration number: ");
		scanf("%d",&Vehicle[i].reg_num);
		printf("Enter the brand name: ");
		scanf("%s",&Vehicle[i].brand_name);
		printf("Enter the launched year: ");
		scanf("%d",&Vehicle[i].launched_year);
		printf("Enter the price: ");
		scanf("%d",&Vehicle[i].price);
	}
	
	//odd reg_num, name starts with R and launched year betn 2022 and 2023 and price more than 5000000
	for(i=0;i<3;i++){
		if(Vehicle[i].reg_num%2!=0 && Vehicle[i].brand_name[0]=='R' && (Vehicle[i].launched_year>=2022 && Vehicle[i].launched_year<=2023) && Vehicle[i].price>5000000){
			//to print in the console
			printf("\nRegistration Number: %d\n",Vehicle[i].reg_num);
			printf("Brand Name: %s\n",Vehicle[i].brand_name);
			printf("Launched Year: %d\n",Vehicle[i].launched_year);
			printf("Price: %d\n",Vehicle[i].price);
			
			//to print in the file
			fprintf(fptr, "\nRegistration Number: %d\n",Vehicle[i].reg_num);
			fprintf(fptr, "Brand Name: %s\n",Vehicle[i].brand_name);
			fprintf(fptr, "Launched Year: %d\n",Vehicle[i].launched_year);
			fprintf(fptr, "Price: %d\n",Vehicle[i].price);
			
		}
	}	

	return 0;
}