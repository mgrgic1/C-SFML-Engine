#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <unordered_set>

class InputManager{

public:
	InputManager(){};
	~InputManager(){};

	//if hold is true, this will return true for as long as the player is holding down the mouse button
	bool IsSpriteClicked(const sf::Sprite& sprite, int mouseKey, const sf::RenderWindow& window, const sf::Event& ev);

	bool MouseHoverSprite(const sf::Sprite& sprite, const sf::RenderWindow& window);

	sf::Vector2i GetMousePosition(const sf::RenderWindow& window);

	//returns the exact frame that the mouseButton was clicked
	bool GetMouseButtonDown(float mouseButton, const sf::Event& ev);

	//is the mouse within the window's bounds?
	bool inWindowBounds(const sf::RenderWindow& window);

    //returns true every frame the key is pressed
	bool GetKey(const sf::Keyboard::Key& key);

	bool GetKeyDown(const sf::Keyboard::Key& key, const sf::Event& ev);

	bool GetKeyUp(const sf::Keyboard::Key& key, const sf::Event& ev);

private:
	bool wasSpriteClicked = false;

	//will be tracking all keys that are pressed at any given moment
    //allows us to make GetKeyDown and GetKeyUp behaviors
	std::unordered_set<sf::Keyboard::Key> inputValues;

};
