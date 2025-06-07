/*
10.2 Define a structure named Player with player id, name, age and favorite game as members. 
And then create two players such as Player 1 and Player_2 and copy data from Player 1 to Player_2. 
Then display the details of the Player_2.
*/

#include<stdio.h>
struct Player{
	int id,age;
	char name[100];
	char favorite_game[100];
}p1, p2;

int main(){
	printf("Detail of Player 1:\n");
	printf("Enter the player id: ");
	scanf("%d",&p1.id);
	printf("Enter the player name: ");
	scanf("%s",p1.name);
	printf("Enter the player age: ");
	scanf("%d",&p1.age);
	printf("Enter the player favorite game: ");
	scanf("%s",p1.favorite_game);
	
//	p1={"%d %s %d %s", p1.id, p1.name, p1.age, p1.favorite_game};
	p2=p1;
//
//	strcpy(p1.name, %s);
	printf("\nDetail of Player 2:\n");
	printf("Id of the player: %d\n",p2.id);
	printf("Name of the player: %s\n",p2.name);
	printf("Age of the player: %d\n",p2.age);
	printf("Favorite game of the player: %s\n",p2.favorite_game);
	
	  			printf("\n\nLab No: 10.2\tName: Ashwin Maharjan\tRoll No: 5");

	return 0;
}