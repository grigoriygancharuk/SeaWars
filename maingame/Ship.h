class Ship
{
public:
	Ship();
	virtual ~Ship();
	int GetDeckState(int who); 
private:
	int oneDeck;
	int twoDeck;
	int threeDeck;
	int fourDeck;
};