#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include "scene.hpp"
#include "utils.hpp"

class Game 
{
public:
	Game();
	~Game();
	void run();
	void handleInput();
	void update();
	bool gameIsRunning;
private:
	Scene* gameScene;
};

#endif //GAME_HPP