/* Poker Engine 
   engine.c
   Waylon Bader
   
   This is going to be a poker engine
   It will handle all the general details of a poker game
   But it will need players interfacing with it in order to fuction
   
   For now I will just be concentrating on Texas Hold'em, with a max of 8 players
   
   
   It will pass the information found in dataformat.h to the players
   
   It will receive the information found in dataformat.h from the player

   so we're going to set up a child process for every player, which will handle communication back and forth with the players who will be
   connected via sockets.
*/

#include <stdio.h>
#include <iostream>
#include <string>
#include "deck.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

std::string convertIntToCard(int cardInt);

float version = 0.01;

int main(int argc, char **argv)
{
	printf("Welcome to poker engine v%2.2f\n",version);
	
	srand(time(NULL));  // get a seed at startup?  we'd be able to use the same seed for multiple tables that way, see if that affects the outcome
	
	Deck deck;
	
	// lets work on dealing a hand to everyone
	
}

std::string convertIntToCard(int cardInt)
{
	char rank, suit;
	switch(cardInt % 4)
	{
	case 0:
		suit = 'S';
		break;
	case 1:
		suit = 'H';
		break;
	case 2:
		suit = 'C';
		break;
	case 3:
		suit = 'D';
		break;
	}
	switch(cardInt % 13)
	{
	case 0:
		rank = 'A';
		break;
	case 1:
		rank = 'K';
		break;
	case 2:
		rank = '2';
		break;
	case 3:
		rank = '3';
		break;
	case 4:
		rank = '4';
		break;
	case 5:
		rank = '5';
		break;
	case 6:
		rank = '6';
		break;
	case 7:
		rank = '7';
		break;
	case 8:
		rank = '8';
		break;
	case 9:
		rank = '9';
		break;
	case 10:
		rank = 'T';
		break;
	case 11:
		rank = 'J';
		break;
	case 12:
		rank = 'Q';
		break;	
	}
	
	std::string retString = "";
	retString += rank;
	retString += suit;
	
	return retString;	
}
   
