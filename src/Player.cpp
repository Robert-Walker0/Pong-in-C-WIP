#include "../headers/player.hpp"
#include <iostream>

Player::Player() : Paddle(-1.0, .1)
{
    width = 0.05;
    height = 0.45;
}

void Player::keycallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    if(key == GLFW_KEY_W || key == GLFW_KEY_UP && y < 0.6)
    {
        //The y in the if is the top of the screen.
        this->Translate(0, moveSpeed);
    } else if(key == GLFW_KEY_S || key == GLFW_KEY_DOWN && y > -1)
    {
        //The y in this if is the bottom of the screen.
        this->Translate(0, -moveSpeed);
    } 
    std::cout << "y=" << y << std::endl;
}