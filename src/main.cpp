#include <iostream>
#include <GLFW/glfw3.h>

/*
TODO: Create the Paddles
TODO: Create the Ball
TODO: Create the scoring system
*/
int windowWidth = 500;
int windowHeight = 500;
const char* windowName = "Pong";

int main()
{
    GLFWwindow* gameScreen;
    if(!glfwInit())
        return -1;
    
    gameScreen = glfwCreateWindow(windowWidth, windowHeight, windowName, NULL, NULL);
    if(!gameScreen)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(gameScreen);
    while(!glfwWindowShouldClose(gameScreen))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(gameScreen);
        glfwPollEvents();
    }
    glfwTerminate();
}