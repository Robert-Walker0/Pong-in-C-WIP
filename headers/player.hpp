#pragma once
#include "paddle.hpp"

class Player : public Paddle
{
    public:
    void keycallback(GLFWwindow* window, int key, int scancode, int action, int mods);
    Player();

    private:
    float moveSpeed = 0.05f;
};