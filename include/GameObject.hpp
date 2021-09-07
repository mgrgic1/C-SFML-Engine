#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include <SFML/Graphics.hpp>


class GameObject
{
    public:
        GameObject(const sf::Sprite sprite, bool setVisible, sf::Vector2f initialPos = sf::Vector2f(0,0), float initalRotation = 0);
        ~GameObject();
        const sf::Sprite& getSprite() const { return gameSprite;};

        const sf::Vector2f& getPosition(){ return gameSprite.getPosition();};
        float getRotation(){return gameSprite.getRotation();};

        void setPosition(float x, float y){gameSprite.setPosition(x,y);};
        void setRotation(float rot){gameSprite.setRotation(rot);};

        void move(sf::Vector2i moveOffset) {gameSprite.move(moveOffset.x, moveOffset.y);};

        //draw the gameobject
        //we have this because, if we disable our gameobject, we are making it invisible. BUT! we are not deleting it
        //invisibility implies, stop drawing it
        void Draw(sf::RenderWindow& window);

        void setVisibility(bool visible){isVisible = visible;};
DO parent child transform stuff

    private:
        sf::Sprite gameSprite;
        bool isVisible;
};

#endif // GAMEOBJECT_HPP
