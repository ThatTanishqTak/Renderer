#include "Application.h"

namespace Engine
{
    void Application::Run()
    {
        while (!m_Window.ShouldClose())
        {
            glfwPollEvents();
        }
    }
}