/* player.h
   Waylon Bader
   
   Player class header.  
*/
   
#pragma once

class Player {

public:
	Player();
	Player(int startingStackSize);
	Player(int card1, int card2);
	Player(int card1, int card2, int startingStackSize);
	int getCard(int cardNumber);
	bool isCardNeeded();
	void receiveCard(int card);
	void clearHand();
	void updateStackSize(int changeStackByThisAmount);
private:
	int			hand[2];
	const int	sizeOfHand = 2;
	int			currentHandPosition;
	bool		handNotFull;
	int			stackSize;
};
