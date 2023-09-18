#pragma once
#include <GLFW/glfw3.h>

class Ball 
{
    public:
        Ball();
        void Draw();
    private:
     int numSegments = 300;
     const float PI = 3.14159265359f;
     float radius;
     float x;
     float y;
};