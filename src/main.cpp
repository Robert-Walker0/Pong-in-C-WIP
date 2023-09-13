#include <iostream>
#include <GLFW/glfw3.h>
#include "../headers/paddles.hpp"

/*
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

    unsigned int buffer;
    glfwMakeContextCurrent(gameScreen); 

    // Game Variables
    Paddle player1 = Paddle(-1.0, 0.1);
    Paddle player2 = Paddle(.95, 0.1);
    //End

    while(!glfwWindowShouldClose(gameScreen))
    {   
        glClear(GL_COLOR_BUFFER_BIT);
        //Render graphics here.
        player1.Draw(gameScreen);
        player2.Draw(gameScreen);
        //DO NOT RENDER BELOW THIS LINE.
        glfwSwapBuffers(gameScreen); 
        glfwPollEvents();
        //Handle user input or respond to events here.
    }
    glfwTerminate();
}
