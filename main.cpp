#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;
int main(void)
{
    GLFWwindow* window;
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

//    инициализация глад
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        cout << "Can't load GLAD" << endl;
        return -1;
    }
    cout << "OpenGL " << GLVersion.major << "." << GLVersion.minor << endl;
    
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
