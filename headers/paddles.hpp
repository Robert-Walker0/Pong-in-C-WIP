#pragma once
#include <GLFW/glfw3.h>

class Paddle 
{
    public:
    Paddle(float x, float y);

    void Draw(GLFWwindow* window);
    void Translate(float dx, float dy);
    void Scale(float scaleFactor);

    private:
        float x;
        float y;
        float width;
        float height;
};