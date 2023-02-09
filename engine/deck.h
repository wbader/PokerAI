/*  Deck.h
    Waylon Bader
    
    This is a standard deck class which will have all the available things you'd want to do with a deck
    i.e. shuffle, deal a card whatever else.
*/

class Deck
{
public:
	void shuffle();
	int dealACard();
	Deck();
	bool isNotAtEnd();
private:
	int deck[52];
	int lastUnusedCard;
	bool notAtEnd;
};
