#include "levelSix.h"
#include <iostream>

levelSix::levelSix(levels & levels, sf::Font font, sf::Texture texture) :
	m_levels(&levels),
	m_comicSans(font),
	m_texture(texture),
	m_textmessage("Press F", m_comicSans, 30)
{
	m_textmessage.setPosition(400.0f, 100.0f);
	m_textmessage.setColor(sf::Color::Black);
	m_textmessage.Bold;
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(0, 0);
	m_sprite.setScale(0.9, 0.9);

	//m_rectangle.setSize(sf::Vector2f(800, 25));
	//m_rectangle.setPosition(sf::Vector2f(0, 575));
	//m_rectangle.setFillColor(sf::Color::Black);

	//Start
	m_rectangleTwo.setSize(sf::Vector2f(75, 25));
	m_rectangleTwo.setPosition(sf::Vector2f(0, 575));
	m_rectangleTwo.setFillColor(sf::Color::Black);

	//Finish
	m_rectangleThree.setSize(sf::Vector2f(75, 25));
	m_rectangleThree.setPosition(sf::Vector2f(725, 575));
	m_rectangleThree.setFillColor(sf::Color::Black);

	m_colourA.setSize(sf::Vector2f(75, 25));
	m_colourA.setPosition(sf::Vector2f(150, 500));
	m_colourA.setFillColor(sf::Color::Red);

	m_colourB.setSize(sf::Vector2f(75, 25));
	m_colourB.setPosition(sf::Vector2f(350, 500));
	m_colourB.setFillColor(sf::Color::Blue);

	m_colourC.setSize(sf::Vector2f(75, 25));
	m_colourC.setPosition(sf::Vector2f(550, 500));
	m_colourC.setFillColor(sf::Color::Yellow);
}

levelSix::~levelSix()
{
	std::cout << "destructing Splash" << std::endl;
}

void levelSix::update(sf::Time deltaTime)
{
	m_cumulativeTime += deltaTime;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::F))
	{
		if (m_cumulativeTime.asSeconds() > 1)
		{
			m_levels->setGameState(GameState::levelSeven);
		}
	}
}

void levelSix::render(sf::RenderWindow & window)
{
	window.clear(sf::Color::White);
	window.draw(m_sprite);
	window.draw(m_textmessage);
	window.draw(m_rectangleTwo);
	window.draw(m_rectangleThree);
	window.draw(m_colourA);
	window.draw(m_colourB);
	window.draw(m_colourC);

	window.display();
}