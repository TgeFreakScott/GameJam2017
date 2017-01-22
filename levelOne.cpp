#include "levelOne.h"
#include <iostream>

levelOne::levelOne(levels & levels, sf::Font font, sf::Texture texture) :
	m_levels(&levels),
	m_comicSans(font),
	m_texture(texture),
	m_textmessage("Press Space", m_comicSans, 30)
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
	m_rectangleTwo.setPosition(sf::Vector2f(700, 150));
	m_rectangleTwo.setFillColor(sf::Color::Black);

	m_rectangleThree.setSize(sf::Vector2f(75, 25));
	m_rectangleThree.setPosition(sf::Vector2f(400, 300));
	m_rectangleThree.setFillColor(sf::Color::Black);

	m_rectangleFour.setSize(sf::Vector2f(75, 25));
	m_rectangleFour.setPosition(sf::Vector2f(100, 500));
	m_rectangleFour.setFillColor(sf::Color::Black);

	m_colourA.setSize(sf::Vector2f(75, 25));
	m_colourA.setPosition(sf::Vector2f(250, 400));
	m_colourA.setFillColor(sf::Color::Blue);

	m_colourB.setSize(sf::Vector2f(75, 25));
	m_colourB.setPosition(sf::Vector2f(550, 200));
	m_colourB.setFillColor(sf::Color::Red);
}


levelOne::~levelOne()
{
	std::cout << "destructing Splash" << std::endl;
}

void levelOne::update(sf::Time deltaTime)
{
	m_cumulativeTime += deltaTime;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
	{
		if (m_cumulativeTime.asSeconds() > 1)
		{
			m_levels->setGameState(GameState::levelTwo);
		}
	}
}

void levelOne::render(sf::RenderWindow & window)
{
	window.clear(sf::Color::White);
	window.draw(m_sprite);
	window.draw(m_textmessage);
	window.draw(m_rectangle);
	window.draw(m_rectangleTwo);
	window.draw(m_rectangleThree);
	window.draw(m_rectangleFour);
	window.draw(m_colourA);
	window.draw(m_colourB);
	window.display();
}