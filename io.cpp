#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "io.h"

using namespace std;

void menu(Character* player) {

	char* userInput = new char[25];
	bool exit = false;
	printf("Welcome to game please type in one of the following commands \n");
	printf("Left - move left \n Right - move right \n Up - move up \n Down - move down \n Exit - quit the game \n");
	while (exit == false)
	{
	scanf("%s", userInput);
	if ((strcmp(userInput,"Right") == 0) || (strcmp(userInput, "right") == 0))
	{
		moveRight(player);
	}
	if ((strcmp(userInput,"Left") == 0) || (strcmp(userInput,"left") == 0))
	{
		moveLeft(player);
	}
	if ((strcmp(userInput,"Up") == 0) || (strcmp(userInput,"up") == 0))
	{
		moveUp(player);
	}
	if ((strcmp(userInput,"Down") == 0) || (strcmp(userInput,"down") == 0))
	{
		moveDown(player);
	}
	if ((strcmp(userInput,"Exit") == 0) || (strcmp(userInput,"exit") == 0))
	{
		exit = true;
	}
	}
	delete []userInput;
	
}
void moveRight(Character* player)
{
	int a = player->position->get_xCord();
	
	//Boundary Handling
	if (a == 10)
	{
		printf("You have reached the edge of the world! \n");
	}
	else
	{
		a = a+1;
		player->position->set_xCord(a);
		printf("You character has moved to x = %d\n", player->position->get_xCord());
	}
}
void moveLeft(Character* player)
{
	int a = player->position->get_xCord();
	
	//Boundary Handling
	if (a == 0)
	{
		printf("You have reached the edge of the world! \n");
	}
	else
	{
		a = a-1;
		player->position->set_xCord(a);
		printf("You character has moved to x = %d\n", player->position->get_xCord());
	}
}
void moveUp(Character* player)
{
	int b = player->position->get_yCord();
	
	//Boundary Handling
	if (b == 10)
	{
		printf("You have reached the edge of the world! \n");
	}
	else
	{
		b = b+1;
		player->position->set_yCord(b);
		printf("You character has moved to y = %d\n", player->position->get_yCord());
	}
}
void moveDown(Character* player)
{
	int b = player->position->get_yCord();
	
	//Boundary Handling
	if (b == 0)
	{
		printf("You have reached the edge of the world! \n");
	}
	else
	{
		b = b-1;
		player->position->set_yCord(b);
		printf("You character has moved to y = %d\n", player->position->get_yCord());
	}
}

