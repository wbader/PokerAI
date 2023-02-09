/*  deck.cpp
    Waylon Bader
    
    Implementation of the deck class
*/

#include "deck.h"
#include <stdlib.h>
#include <time.h>



Deck :: Deck() 
{
	for(int i = 0; i < 52; i++)
	{
		deck[i] = i;
	}
	lastUnusedCard = 0;
	notAtEnd = true;
}

void Deck :: shuffle()
{
	for(int i = 0; i < 52; i++)
	{
		int randomLocationInDeck = (rand() % (52 - i)) + i;
		deck[i] = deck[randomLocationInDeck];
	}
	lastUnusedCard = 0;
}

int Deck :: dealACard()
{
	return deck[lastUnusedCard++];
}

bool Deck :: isNotAtEnd()
{
	if (lastUnusedCard > 51)
		notAtEnd = false;
	else
		notAtEnd = true;
		
	return notAtEnd;
}
