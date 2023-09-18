#include <iostream>
#include <GLFW/glfw3.h>
#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>
#include "../headers/paddle.hpp"
#include "../headers/player.hpp"
#include "../headers/Ball.hpp"

/*
These are the later objectives, the main objectives will be placed underneath this TODO as a new one.
TODO: Create the Ball
TODO: Create the scoring system
TODO: Create enemy AI
*/

int windowWidth = 1000;
int windowHeight = 1000;
const char* windowName = "Pong";
double startingY = .1;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
Player P;
Ball B;
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

    //Setting the game icon
    GLFWimage image[1]; 
    image[0].pixels = stbi_load("imgs/program_icon.png", &image[0].width, &image[0].height, 0, 4);
    glfwSetWindowIcon(gameScreen, 1, image);
    glfwSetKeyCallback(gameScreen, key_callback);
    while(!glfwWindowShouldClose(gameScreen))
    {   
        glClear(GL_COLOR_BUFFER_BIT);
        //Render graphics here.
        B.Draw();
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