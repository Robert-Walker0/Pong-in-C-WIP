#include "../headers/Player.h"
#include <iostream>

Player::Player() : Paddle(-1.0, .1)
{
    width = 0.05;
    height = 0.45;
}

void Player::keycallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    if(key == GLFW_KEY_W || key == GLFW_KEY_UP)
    {
        this->Translate(0, moveSpeed);
    } else if(key == GLFW_KEY_S || key == GLFW_KEY_DOWN)
    {
        this->Translate(0, -moveSpeed);
    } 
}