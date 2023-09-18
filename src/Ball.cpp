#include "../headers/Ball.hpp"
#include <iostream>
#include <cmath>

Ball::Ball()
{
    radius = .15;
}

void Ball::Draw()
{
    glBegin(GL_POLYGON); 
    glColor3f(1, 1, 1);
    for(int i = 0; i <= numSegments; i++)
    {
       float angle = (10.0f * PI  * i / numSegments);
       float x = radius * cos(angle);
       float y = radius * sin(angle)+0.25;
       glVertex2f(x, y);
    }
    glEnd();
}
