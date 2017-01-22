#pragma once
#ifndef LEVELTEN
#define LEVELTEN
#include <SFML\Graphics.hpp>
#include "levels.h"

class levels;

class levelTen
{
public:
	levelTen(levels& levels, sf::Font font, sf::Texture texture);
	~levelTen();

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
};

#endif
