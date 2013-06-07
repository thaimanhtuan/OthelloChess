static const int NOBODY = 0;
static const int WHITE = 1;
static const int BLACK = 2;

class Score
{
private:
	int m_score[2];
public:
	Score();												
	Score(int whiteScore, int blackScore);							
	
	static int getOpponent(int player);						
	
	void setScore(int player, int score);					
	int getScore(int player);								
	
	const void addScore(int player, int amount);			
	const void substractScore(int player, int amount);		
};
