#include "game.hpp"

Game::Game()
{
	gameIsRunning = true;
	gameScene = new Scene();
}

Game::~Game()
{
	delete gameScene;
}

void Game::run()
{
	handleInput();
	update();
}

void Game::handleInput()
{
	std::cout << "handling input" << std::endl;
}

void Game::update()
{
	CharacterType testType = PYROMANCER;

	gameScene->addCharacterByCharacterType(PYROMANCER, false);
}
