#pragma once
#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "GameObject.hpp"

class Test : public State {

public:
	Test(GameToolsPtr tools);
	~Test();

	void Start();
	void Update(float dt);
	void HandleInput(sf::Event& ev);
	void Draw(float dt);



private:
	GameToolsPtr gameTools;

	GameObject* player;


};
