#include "levelThree.h"
#include <iostream>

levelThree::levelThree(levels & levels, sf::Font font, sf::Texture texture) :
	m_levels(&levels),
	m_comicSans(font),
	m_texture(texture),
	m_textmessage("Press A", m_comicSans, 30)
{
	m_textmessage.setPosition(400.0f, 100.0f);
	m_textmessage.setColor(sf::Color::Black);
	m_textmessage.Bold;
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(0, 0);
	m_sprite.setScale(0.9, 0.9);
	m_rectangle.setSize(sf::Vector2f(800, 25));
	m_rectangle.setPosition(sf::Vector2f(0, 575));
	m_rectangle.setFillColor(sf::Color::Black);

	m_rectangleTwo.setSize(sf::Vector2f(75, 25));
	m_rectangleTwo.setPosition(sf::Vector2f(700, 155));
	m_rectangleTwo.setFillColor(sf::Color::Black);

	m_rectangleThree.setSize(sf::Vector2f(75, 25));
	m_rectangleThree.setPosition(sf::Vector2f(200, 350));
	m_rectangleThree.setFillColor(sf::Color::Black);

	m_colourA.setSize(sf::Vector2f(75, 25));
	m_colourA.setPosition(sf::Vector2f(370, 300));
	m_colourA.setFillColor(sf::Color::Blue);

	m_colourA2.setSize(sf::Vector2f(75, 25));
	m_colourA2.setPosition(sf::Vector2f(500, 500));
	m_colourA2.setFillColor(sf::Color::Blue);

	m_colourB.setSize(sf::Vector2f(75, 25));
	m_colourB.setPosition(sf::Vector2f(550, 200));
	m_colourB.setFillColor(sf::Color::Red);

	m_colourC.setSize(sf::Vector2f(75, 25));
	m_colourC.setPosition(sf::Vector2f(370, 420));
	m_colourC.setFillColor(sf::Color::Yellow);
}

levelThree::~levelThree()
{
	std::cout << "destructing Splash" << std::endl;
}

void levelThree::update(sf::Time deltaTime)
{
	m_cumulativeTime += deltaTime;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		if (m_cumulativeTime.asSeconds() > 1)
		{
			m_levels->setGameState(GameState::levelFour);
		}
	}
}

void levelThree::render(sf::RenderWindow & window)
{
	window.clear(sf::Color::White);
	window.draw(m_sprite);
	window.draw(m_textmessage);
	window.draw(m_rectangle);
	window.draw(m_rectangleTwo);
	window.draw(m_rectangleThree);
	window.draw(m_colourA);
	window.draw(m_colourA2);
	window.draw(m_colourB);
	window.draw(m_colourC);
	window.display();
}