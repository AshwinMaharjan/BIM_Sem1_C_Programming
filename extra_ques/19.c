//if odd then odd.dat otherwise even.dat
#include<stdio.h>
int main(){
	FILE*fptr1=fopen("odd.dat","w");
	FILE*fptr2=fopen("even.dat","w");
	
	int num;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if(num%2!=0){ //odd condition
		printf("The entered number is odd number");
		fprintf(fptr1, "%d",num);
	}
	else{
		printf("The entered number is even number");
		fprintf(fptr2, "%d",num);
	}
	fclose(fptr1);
	fclose(fptr2);
	
	return 0;
}
