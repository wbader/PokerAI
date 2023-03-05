/* card.cpp
   Waylon Bader

   Card class definitions.
*/

#include "card.h"
#include <iostream>

Card::Card(int newCardNumber)
{
	Card::cardNumber = newCardNumber;
	Card::set = true;
	Card::updateRankAndSuit();
}

Card::Card()
{
	Card::set = false;
}

Card::~Card()
{
	// I don't think anything special has to be done here
}

bool Card::operator<(const Card& c)
{
	if (Card::rank < c.rank)
		return true;

	return false;
}

bool Card::operator>(const Card& c)
{
	if (Card::rank > c.rank)
		return true;

	return false;
}

bool Card::operator==(const Card& c)
{
	if (Card::rank == c.rank)
		return true;

	return false;
}

bool Card::operator<=(const Card& c)
{
	if (Card::rank <= c.rank)
		return true;

	return false;
}

bool Card::operator>=(const Card& c)
{
	if (Card::rank >= c.rank)
		return true;

	return false;
}

std::ostream& operator<<(std::ostream& os, const Card& c)
{

	char rank, suit;
	switch (c.suit)
	{
	case 0:
		suit = 'd';
		break;
	case 1:
		suit = 'c';
		break;
	case 2:
		suit = 'h';
		break;
	case 3:
		suit = 's';
		break;
	}
	switch (c.rank)
	{
	case 0:
		rank = '2';
		break;
	case 1:
		rank = '3';
		break;
	case 2:
		rank = '4';
		break;
	case 3:
		rank = '5';
		break;
	case 4:
		rank = '6';
		break;
	case 5:
		rank = '7';
		break;
	case 6:
		rank = '8';
		break;
	case 7:
		rank = '9';
		break;
	case 8:
		rank = 'T';
		break;
	case 9:
		rank = 'J';
		break;
	case 10:
		rank = 'Q';
		break;
	case 11:
		rank = 'K';
		break;
	case 12:
		rank = 'A';
		break;
	}

	os << rank << suit;
	return os;
}

bool Card::setCard(int newCardNumber)
{
	if(set)
		return false;

	Card::cardNumber = newCardNumber;
	Card::set = true;
	Card::updateRankAndSuit();

	return true;
}

bool Card::isSameSuit(const Card& c)
{
	if (Card::suit == c.suit)
		return true;
	else
		return false;
}

bool Card::isPreviousRank(const Card& c)
{
	if (Card::rank == (c.rank + 1))
		return true;

	return false;
}

bool Card::isNextRank(const Card& c)
{
	if (Card::rank == (c.rank - 1))
		return true;
	return false;
}
