#include "Test.hpp"
#include<iostream>

Test::Test(GameToolsPtr tools) {
	this->gameTools = tools;
    gameTools->assetManager.LoadTexture("ship","ship.png");

    sf::Sprite gameSprite;
    gameSprite.setTexture(gameTools->assetManager.GetTexture("ship"));
    player = new GameObject(gameSprite, true, sf::Vector2f(400,300),0);

}

Test::~Test()
{
    delete player;

}


void Test::Start() {

}

void Test::HandleInput(sf::Event& ev)
{

}

void Test::Update(float dt)
{


}

void Test::Draw(float dt)
{
    player->Draw(*gameTools->window.get());
}
