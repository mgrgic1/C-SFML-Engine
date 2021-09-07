#pragma once
#include <SFML/Audio.hpp>

//music class
//only one music song can be played at a time (obviously, cannot play more than one)
class Music {

public:
    Music(){};
    ~Music(){};
    void playSong(std::string filePath);
    void setLoop(bool loop);
    const int getSongDuration(); //in seconds
    const int getSongPosition(); //in seconds

    bool isPlaying();






private:
    sf::SoundBuffer buffer;
    sf::Music music;

};
