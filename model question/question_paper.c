//book id odd and author name starts with R and have price less than 5k
#include<stdio.h>
struct library{
	int book_id;
	char author_name[100];
	int isbn;
	float price;
};
int main(){
	int i;
	FILE*fptr=fopen("Library.dat","wb");
	struct library Library[10];
	
	for(i=0;i<10;i++){
		printf("Enter the book id: ");
		scanf("%d",&Library[i].book_id);
		printf("Enter the author name: ");
		scanf("%s",&Library[i].author_name);
		printf("Enter the book isbn: ");
		scanf("%d",&Library[i].isbn);
		printf("Enter the book price: ");
		scanf("%f",&Library[i].price);
	}

	printf("\nDetails of the required information:\n");	
	
	for(i=0;i<10;i++){
		if(Library[i].book_id%2!=0 && Library[i].author_name[0]=='R' && Library[i].price<5000){
			printf("Book ID: %d\n",Library[i].book_id);
			printf("Author Name: %s\n",Library[i].author_name);
			printf("Book ISBN: %d\n",Library[i].isbn);
			printf("Book Price: %.2f\n",Library[i].price);
			
			fprintf(fptr, "ID: %d\n",Library[i].book_id);
			fprintf(fptr, "Author Name: %s\n",Library[i].author_name);
			fprintf(fptr, "Book ISBN: %d\n",Library[i].isbn);
			fprintf(fptr, "Book Price: %.2f\n",Library[i].price);
		}
	}
	fclose(fptr);
	
	return 0;
}