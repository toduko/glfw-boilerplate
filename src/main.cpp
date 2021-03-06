#define GLFW_INCLUDE_NONE
#include <stdio.h>
#include <GLFW/glfw3.h>
#include <GL/gl.h>

int main()
{
    GLFWwindow *window;
    if (!glfwInit())
    {
        printf("Couldn't init GLFW\n");
        return 1;
    }

    window = glfwCreateWindow(640, 480, "OpenGL Boilerplate", NULL, NULL);

    if (!window)
    {
        printf("Couldn't open window\n");
        return 1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}