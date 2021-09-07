#pragma once
#include <SFML/Graphics.hpp>
#include "AssetManager.hpp"
#include "StateManager.hpp"
#include "InputManager.hpp"

struct GameTools {
	AssetManager assetManager;
	StateManager stateManager;
	InputManager inputManager;

	std::shared_ptr<sf::RenderWindow> window;

	sf::Event ev;
};

typedef std::shared_ptr<GameTools> GameToolsPtr;

//main game manager
class Game {

public:
	Game();
	~Game(){};

	void CheckInput();
	void Update();
	void Render();

	const bool isRunning() const;

private:
	std::shared_ptr<sf::RenderWindow> mainWindow;

	GameToolsPtr gameTools;
	sf::Clock clock;


};
