#include <iostream>
#include <GLFW/glfw3.h>
#include "../headers/paddles.hpp"
#include "../headers/Player.h"

/*
These are the later objectives, the main objectives will be placed underneath this TODO as a new one.
TODO: Create the Ball
TODO: Create the scoring system
TODO: Add icon for the program's window and compilation later.
*/

//TODO: Replace the compile icon for something else on compile time.

int windowWidth = 1000;
int windowHeight = 1000;
const char* windowName = "Pong";
double startingY = .1;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
Player P;
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

    glfwMakeContextCurrent(gameScreen); 

    // Game Variables
    Paddle playerTwo = Paddle(.96, startingY);
    //End

    glfwSetKeyCallback(gameScreen, key_callback);
    while(!glfwWindowShouldClose(gameScreen))
    {   
        glClear(GL_COLOR_BUFFER_BIT);
        //Render graphics here.
        P.Draw(gameScreen);
        playerTwo.Draw(gameScreen);
        //DO NOT RENDER BELOW THIS LINE.
        glfwSwapBuffers(gameScreen); 
        glfwPollEvents();
        //Handle user input or respond to events here.
    }
    glfwTerminate();
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    P.keycallback(window, key, scancode, action, mods);
}