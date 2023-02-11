/* player.h
   Waylon Bader
   
   Player class header.  
*/
   

class Player {

public:
	Player();
	Player(int card1, int card2);
	int getCard(int cardNumber);
	bool isCardNeeded();
	void receiveCard(int card);
	void clearHand();
private:
	int hand[2];
	const int sizeOfHand = 2;
	int currentHandPosition;
	bool handNotFull;
};
