#pragma once
#ifndef LEVELFIVE
#define LEVELFIVE
#include <SFML\Graphics.hpp>
#include "levels.h"

class levels;

class levelFive
{
public:
	levelFive(levels& levels, sf::Font font, sf::Texture texture);
	~levelFive();

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
	sf::RectangleShape m_colourA;
	sf::RectangleShape m_colourA2;
	sf::RectangleShape m_colourB;
	sf::RectangleShape m_colourB2;
	sf::RectangleShape m_colourC;
	sf::RectangleShape m_colourC2;

};

#endif
