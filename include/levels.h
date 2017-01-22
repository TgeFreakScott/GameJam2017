#ifndef LEVELS
#define LEVELS

#include <SFML/Graphics.hpp>
#include"levelOne.h"
#include"levelTwo.h"
#include"levelThree.h"
#include"levelFour.h"
#include"levelFive.h"
#include"levelSix.h"
#include"levelSeven.h"
#include"levelEight.h"
#include"levelNine.h"
#include"levelTen.h"

class levelOne;
class levelTwo;
class levelThree;
class levelFour;
class levelFive;
class levelSix;
class levelSeven;
class levelEight;
class levelNine;
class levelTen;

enum class
	GameState
{
	None,
	levelOne,
	levelTwo,
	levelThree,
	levelFour,
	levelFive,
	levelSix,
	levelSeven,
	levelEight,
	levelNine,
	levelTen
};

class levels
{
public:
	levels();
	~levels();
	void run();

	GameState m_currentGameState;
	void setGameState(GameState gameState);
private:
	void processEvents();
	void update(sf::Time);
	void render();

	sf::RenderWindow m_window;

	levelOne *m_levelOneScreen;
	levelTwo *m_levelTwoScreen;
	levelThree *m_levelThreeScreen;
	levelFour *m_levelFourScreen;
	levelFive *m_levelFiveScreen;
	levelSix *m_levelSixScreen;
	levelSeven *m_levelSevenScreen;
	levelEight *m_levelEightScreen;
	levelNine *m_levelNineScreen;
	levelTen *m_levelTenScreen;

	sf::Font m_comicSans;
};

#endif // !LEVELS
