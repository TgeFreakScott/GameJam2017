#ifndef LEVELONE
#define LEVELONE
#include <SFML\Graphics.hpp>
#include "levels.h"

class levels;

class levelOne
{
public:
	levelOne(levels& levels, sf::Font font, sf::Texture texture);
	~levelOne();

	void update(sf::Time deltaTime);
	void render(sf::RenderWindow& window);

private:
	levels *m_levels;
	sf::Time m_cumulativeTime;
	sf::Font m_comicSans;
	sf::Text m_textmessage;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::RectangleShape m_rectangle;
	sf::RectangleShape m_rectangleTwo;
	sf::RectangleShape m_rectangleThree;
	sf::RectangleShape m_rectangleFour;

	sf::RectangleShape m_colourA;
	sf::RectangleShape m_colourB;
};

#endif
