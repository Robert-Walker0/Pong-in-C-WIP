#include <iostream>
#include <GLFW/glfw3.h>

/*
TODO: Create the Paddles
TODO: Create the Ball
TODO: Create the scoring system
TODO: Add icon for the program's window and compilation later.
*/
int windowWidth = 1000;
int windowHeight = 1000;
const char* windowName = "Pong";

int main()
{
    GLFWwindow* gameScreen;
    if(!glfwInit())
        return -1;
    
    glfwWindowHint(GLFW_MAXIMIZED, GLFW_TRUE);
    gameScreen = glfwCreateWindow(windowWidth, windowHeight, windowName, NULL, NULL);
    if(!gameScreen)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(gameScreen); //What does make the windows context mean?
    while(!glfwWindowShouldClose(gameScreen))
    {   
        glClear(GL_COLOR_BUFFER_BIT);
        //Render graphics here.

        //DO NOT RENDER BELOW THIS LINE.
        glfwSwapBuffers(gameScreen); //What does this do?
        glfwPollEvents();
        //Handle user input or respond to events here.
    }
    glfwTerminate();
}