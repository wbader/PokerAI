/* player.cpp
   Waylon Bader
   
   This should hold information about the player in a player class.
   Hand, stack size, other?
   
*/

#include "player.h"
#include <stdexcept>

using namespace std;

Player::Player()
{
	handNotFull = true;
	currentHandPosition = 0;
}

Player::Player(int card1, int card2)
{
	handNotFull = true;
	currentHandPosition = 0;
	try
	{
		receiveCard(card1);
		receiveCard(card2);
	}
	catch 
	{
	}
}

void Player::receiveCard(int card)
{
	if(card < 0 || card > 51)
	{
		throw invalid_argument("Card passed to receiveCard(int) was out of range") ;  
	}
	if(!handNotFull)
	{
		throw out_of_range("Hand already contains enough cards");
	}
	hand[currentHandPosition++]=card1;
	if(currentHandPosition >= 2)
		handNotFull = false;
	
	return;
}

bool Player::isCardNeeded()
{
	return handNotFull;
}

int Player::getCard(int cardNumber)
{
	if(handNotFull)
	{
		throw out_of_range("Hand doesn't have all the cards yet");
		return -1; 
	}
	if(cardNumber > 1 || cardNumber < 0)
	{
		throw invalid_argument("getCard(int) needs to be passed a 0 or 1 only");
		return -1; 
	}
	
	return hand[cardNumber];	
}
