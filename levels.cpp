#include "levels.h"
#include <iostream>
using namespace std;

levels::levels() :
	m_window(sf::VideoMode(800, 600), "Colour-Waves"), m_currentGameState(GameState::levelOne)

{
	if (!m_comicSans.loadFromFile("C:/windows/Fonts/Arial.ttf"))
	{
		std::cout << "Problem loading font file" << std::endl;
	}
	sf::Texture m_texture;
	if (!m_texture.loadFromFile("AC.jpg"))
	{
		cout << ("Error Loading Font") << endl;;
	}

	m_levelOneScreen = new levelOne(*this, m_comicSans, m_texture);
	m_levelTwoScreen = new levelTwo(*this, m_comicSans, m_texture);
	m_levelThreeScreen = new levelThree(*this, m_comicSans, m_texture);
	m_levelFourScreen = new levelFour(*this, m_comicSans, m_texture);
	m_levelFiveScreen = new levelFive(*this, m_comicSans, m_texture);
	m_levelSixScreen = new levelSix(*this, m_comicSans, m_texture);
	m_levelSevenScreen = new levelSeven(*this, m_comicSans, m_texture);
	m_levelEightScreen = new levelEight(*this, m_comicSans, m_texture);
	m_levelNineScreen = new levelNine(*this, m_comicSans, m_texture);
	m_levelTenScreen = new levelTen(*this, m_comicSans, m_texture);
	//m_levelOneScreen; = new Credit(*this, m_comicSans);

}

levels::~levels()
{
	delete(m_levelOneScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelTwoScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelThreeScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelFourScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelFiveScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelSixScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelSevenScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelEightScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelNineScreen);
	std::cout << "destructing Game" << std::endl;
	delete(m_levelTenScreen);
	std::cout << "destructing Game" << std::endl;

}

void levels::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f);
	m_window.setKeyRepeatEnabled(false);

	while (m_window.isOpen())
	{
		processEvents();
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			update(timePerFrame);
		}
		render();
	}
}

void levels::setGameState(GameState gameState)
{
	m_currentGameState = gameState;
}

void levels::update(sf::Time time)
{
	switch (m_currentGameState)
	{
	case GameState::None:
		std::cout << "No GameSate" << std::endl;
		break;
	case GameState::levelOne:
		m_levelOneScreen->update(time);
		break;
	case GameState::levelTwo:
		m_levelTwoScreen->update(time);
		break;
	case GameState::levelThree:
		m_levelThreeScreen->update(time);
		break;
	case GameState::levelFour:
		m_levelFourScreen->update(time);
		break;
	case GameState::levelFive:
		m_levelFiveScreen->update(time);
		break;
	case GameState::levelSix:
		m_levelSixScreen->update(time);
		break;
	case GameState::levelSeven:
		m_levelSevenScreen->update(time);
		break;
	case GameState::levelEight:
		m_levelEightScreen->update(time);
		break;
	case GameState::levelNine:
		m_levelNineScreen->update(time);
		break;
	case GameState::levelTen:
		m_levelTenScreen->update(time);
		break;

	default:
		break;
	}
}

void levels::render()
{
	switch (m_currentGameState)
	{
	case GameState::levelOne:
		m_levelOneScreen->render(m_window);
		break;
	case GameState::levelTwo:
		m_levelTwoScreen->render(m_window);
		break;
	case GameState::levelThree:
		m_levelThreeScreen->render(m_window);
		break;
	case GameState::levelFour:
		m_levelFourScreen->render(m_window);
		break;
	case GameState::levelFive:
		m_levelFiveScreen->render(m_window);
		break;
	case GameState::levelSix:
		m_levelSixScreen->render(m_window);
		break;
	case GameState::levelSeven:
		m_levelSevenScreen->render(m_window);
		break;
	case GameState::levelEight:
		m_levelEightScreen->render(m_window);
		break;
	case GameState::levelNine:
		m_levelNineScreen->render(m_window);
		break;
	case GameState::levelTen:
		m_levelTenScreen->render(m_window);
		break;
	default:
		m_window.clear(sf::Color::Blue);
		m_window.display();
		break;
	}
}

void levels::processEvents()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		m_window.close();
	}
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
		processEvents();
	}
}