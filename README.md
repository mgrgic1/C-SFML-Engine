# C++ SFML Engine

This is a basic foundation for developing a 2D Game Engine using the SFML library. Changes were tracked locally but then uploaded to Github.
<br>
This was uploaded as a CodeBlocks project because of its support for the SFML library

# Introduction
Though a basic engine, it contains many simple, yet crucial, behaviors that all game engines have. The main file goes through three loops:
<ul>
  <li>Check input</li>
  <li>Update the screen </li>
  <li>Render graphics </li>
  </ul>
  
# Features
Behaviors are further defined in the Game.cpp file (which state is receiving these update calls, which state is being processed for state changes, etc.)
The Game.cpp contains all basic information for our game. The tools/features needed to put the game engine together include (updated 9/7/2021):
<ul>
  <li>Basic asset manager: imports fonts and 2D images to be used throughout the game</li>
  <li>Music class: do you want music in your scene? Add it this way!</li>
  <li>Input manager: tracks what key the user is pressing, if the user is clicking a sprite, if the user is clicking the mouse, etc...</li>
  <li>Animation: uses sprite sheets (must be added as an image to the project) to create an animation. Speed of the animation can be easily changed/retrieved.</li>
  <li>Gameobject class: basic class that other classes can inherit from. I attempted to model the Gameobject class similar to Unity (though obviously much simpler) so that it can contain similar behaviors, such as:
     <ul>
       <li>Updating/setting an object's position</li>
       <li>Updating/setting an object's rotation</li>
       <li>Moving an object</li>
       <li>Setting its visibility in the scene</li>
    </ul>
  </li>
  </ul>
  <br>
  
# Planned Features
Numerous features can be added to this project to make the engine more robust/powerful. The main features I had in mind were:
<ul>
  <li>Particle system: Creating 2D fire, smoke, water, or other particle-reliant features would be possible with a built in particle system. I'm hoping to add simple features that can change emission rate, spread, and time between particle emissions.</li>
  <li>Light system: This may require an external library because this works with shaders. For slightly more sophisticated games, light is an incredible feature to have. Working with shaders (and potentially writing my own) may be an obstacle.</li>
  <li>Physics engine: This will 100% be implemented using Box2D, a physics engine designed for SFML.</li>
</ul>
<br>
Everything will be further defined as the project keeps being updated.









