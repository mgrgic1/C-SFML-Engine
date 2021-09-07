#include "GameObject.hpp"
#include <math.h>
#include <iostream>

GameObject::GameObject(const sf::Sprite sprite, bool setVisible, sf::Vector2f initialPos, float initialRotation)
{
    gameSprite = sprite;
    gameSprite.setPosition(initialPos);
    gameSprite.setRotation(initialRotation);
    isVisible = setVisible;
}





GameObject::~GameObject()
{
    //dtor
}


void GameObject::Draw(sf::RenderWindow& window)
{
    if(isVisible)
    {
        window.draw(gameSprite);
    }
}
