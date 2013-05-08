#include <iostream>
#include "Score.h"

using namespace std;

Score::Score()
{
	m_score[0] = m_score[1] = 0;
}

Score::Score(int whiteScore, int blackScore)
{
	m_score[0] = whiteScore;
	m_score[1] = blackScore;
}

int Score::getOpponent(int player)
{
	return player % 2 + 1;
}

void Score::setScore(int player, int score)
{
	m_score[player-1] = score;
}

int Score::getScore(int player)
{
	return m_score[player-1];
}

const void Score::addScore(int player, int amount)
{
	m_score[player-1] += amount;
}

const void Score::substractScore(int player, int amount)
{
	m_score[player-1] -= amount;
}

