#include "../headers/paddles.hpp"

Paddle::Paddle(float x, float y)
{
    this->x = x;
    this->y = y;
    width = 0.05;
    height = 0.45;
}

void Paddle::Draw(GLFWwindow *window)
{
    if(glfwInit())
    {
        glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(x, y);
        glVertex2f(x + width, y);
        glVertex2f(x + width, y + height);
        glVertex2f(x, y + height);
        glEnd();
    }
}

void Paddle::Translate(float dx, float dy)
{
    x += dx;
    y += dy;
}

void Paddle::Scale(float scaleFactor)
{
    width *= scaleFactor;
    height *= scaleFactor;
}
