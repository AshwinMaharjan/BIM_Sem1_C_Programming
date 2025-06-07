#include<stdio.h>
struct book{
	int book_id;
	char title[100];
	float price;
};
int main(){
	struct book Book[3];
	FILE*fptr=fopen("book.dat","w");
	int i;

	//taking input from the user
	for(i=0;i<3;i++){
		printf("\nEnter the book ID: ");
		scanf("%d",&Book[i].book_id);
		printf("Enter the book title: ");
		scanf("%s",&Book[i].title);
		printf("Enter the book price: ");
		scanf("%f",&Book[i].price);
	}
	
	//displaying all the information in "book.dat" file
	for(i=0;i<3;i++){
		fprintf(fptr, "\nBook ID: %d\n",Book[i].book_id);
		fprintf(fptr, "Book Title: %s\n",Book[i].title);
		fprintf(fptr, "Book Price: %.2f\n",Book[i].price);
	}
	
	//displaying the information only if price is lesser than 1000 in console
	printf("\nDisplaying the information: \n");
	for(i=0;i<3;i++){
		if(Book[i].price<1000){
			printf("\nBook ID: %d\n",Book[i].book_id);
			printf("Book Title: %s\n",Book[i].title);
			printf("Book Price: %.2f\n",Book[i].price);
		}
	}
	
	fclose(fptr);

	return 0;
}