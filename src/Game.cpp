#include "Game.hpp"
#include "Test.hpp"
#include <iostream>


Game::Game() {


sf::VideoMode videoMode;

//BY D E F A U L T, the game will start in the user's 1920x1080 resolution
std::cout<<"Heads up, change defaults. and add fullscreen" << std::endl;
videoMode.width = 800;//videoMode.getDesktopMode().width;
videoMode.height = 600; //videoMode.getDesktopMode().height;

videoMode.bitsPerPixel = 32;

this->mainWindow = std::shared_ptr<sf::RenderWindow>(new sf::RenderWindow(videoMode, "SFML Game", sf::Style::Titlebar | sf::Style::Close));

this->mainWindow->setFramerateLimit(60);


gameTools = std::make_shared<GameTools>();
this->gameTools->stateManager.LoadState(std::unique_ptr<State>(new Test(this->gameTools)));
this->gameTools->window = this->mainWindow;

this->gameTools->stateManager.ProcessStateChanges();
}


void Game::CheckInput()
{
    //event polling
    while(this->gameTools->window->pollEvent(this->gameTools->ev))
    {
        switch(this->gameTools->ev.type)
        {
            case sf::Event::Closed:
                this->mainWindow->close();
                break;

            case sf::Event::KeyPressed:
                if(this->gameTools->ev.key.code == sf::Keyboard::Escape) {
                    this->mainWindow->close();
                }
                break;
        }
        this->gameTools->stateManager.CurrentState()->HandleInput(this->gameTools->ev);

    }
}


void Game::Update() {
    this->gameTools->stateManager.ProcessStateChanges();

    this->gameTools->stateManager.CurrentState()->Update(clock.restart().asSeconds());

}

void Game::Render() {


	this->mainWindow->clear();

	//Draw active scene
    this->gameTools->stateManager.CurrentState()->Draw(clock.restart().asSeconds());
	this->mainWindow->display();

}




const bool Game::isRunning() const {
	return this->mainWindow->isOpen();
}
