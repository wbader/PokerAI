/* dataformat.h
   This will breakdown the data sent to and from the engine

	16 bits = 65k, since this is going to be a 5/10 game with starting stacks of 1000, and i'm planning to reset stacks at the end of each hand, this hard cap should be ok.  If there are weird overflow errors, this is one place to look.

   To the player:
   # of bits / What they mean
   4           # of players dealt into the hand/ position of the small blind is this minus 1.
   10          Which players are still in the hand (on/off based on position) (this is future proofing, to have up to 10 players on a table)
   4           The position of the player (0 = button, 1 = Cutoff, etc)
   16x10       The size of each players stack by position, 1 for each player
   16          The size of the pot
   16          The size of the current bet
   16          The size of the lowest allowable bet/raise
   3           The valid options (Check, Call, Bet, Raise, Fold)
   6x2         The hand dealt to the player (Texas Hold'em has 2 cards, there are 52 cards in a deck)
   2           The current 'phase' of the hand (preflop, flop, turn, river)
   6x5         The community cards (if any have been used)
   1           Is the hand over?
   4           Who won the hand
   16          The amount the winner(s) receive/loser(s) pay (so this is signed)
   
   From the player:
      
   3           The option chosen (Check, Call, Bet, Raise, Fold)
   16          The size of the bet/raise if chosen
   
   
*/

class dataformat
{
public:
	void convertDataForTransfer();
private:
	int numOfPlayers;
};


