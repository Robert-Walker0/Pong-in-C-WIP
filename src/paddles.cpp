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
    float R, G, B;
    R = colorArr[0], G = colorArr[1], B = colorArr[2];
    glBegin(GL_QUADS);
    glColor3f(R, G, B);
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x, y + height);
    glEnd();
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
