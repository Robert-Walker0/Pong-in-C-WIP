#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if(!glfwInit())
    {
        std::cout << "OpenGL is not on the system." << std::endl;
        system("pause");
        return -1;
    } else {
        std::cout << "OpenGL is on the system" << std::endl;
        system("pause");
        return 0;
    }
}