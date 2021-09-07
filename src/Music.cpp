#include "Music.hpp"

void Music::playSong(std::string filePath, bool loop)
{
    if(!music.openFromFile(filePath))
    {
        std::cout<<"Error playing song!" << std::endl;
        return;
    }
    music.play();
}

void Music::setLoop(bool loop)
{
    music.setLoop(loop);
}

//returned in seconds
const int Music::getSongDuration()
{
    return music.getDuration().asSeconds();
}

const int Music::getSongPosition()
{

}

const int getSongPosition()
{

}

bool Music::isPlaying()
{

}

bool isPlaying()
{

}
