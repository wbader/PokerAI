/* card.h
   Waylon Bader

   Card class header.
*/

#pragma once
#include <iostream>

enum Suit { Diamonds = 0, Clubs, Hearts, Spades };
enum Rank { Two = 0, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace}; // Set this way so A > K > Q etc

class Card {
public:
	Card(int newCardNumber);
	Card();
	~Card();
	friend std::ostream& operator <<(std::ostream& os, const Card& c);
	bool operator <(const Card& c);   // These will not care about suit, only rank
	bool operator >(const Card& c);   // These will not care about suit
	bool operator ==(const Card& c);  // These will not care about suit
	bool operator <=(const Card& c);  // These will not care about suit
	bool operator >=(const Card& c);  // These will not care about suit
	bool setCard(int newCardNumber);
	bool isSet() { return set; };
	bool isSameSuit(const Card& c);
	bool isPreviousRank(const Card& c);  // To check for straits
	bool isNextRank(const Card& c);		 // Don't know if I'll need both
	void clear() { set = false; };
private:
	int cardNumber;
	Rank rank;
	Suit suit;
	bool set;
	void updateRankAndSuit() { rank = (Rank)(cardNumber % 13); suit = (Suit)(cardNumber % 4); };
};


