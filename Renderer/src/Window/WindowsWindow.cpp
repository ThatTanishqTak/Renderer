#include "WindowsWindow.h"

namespace Engine
{
    WindowsWindow::WindowsWindow(int width, int height, std::string title) : m_Width(width), m_Height(height), m_Title(title)
    {
        InitWindow();
    }

    WindowsWindow::~WindowsWindow()
    {
        glfwDestroyWindow(m_Window);
        glfwTerminate();
    }

    void WindowsWindow::InitWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    
        m_Window = glfwCreateWindow(m_Width, m_Height, m_Title.c_str(), nullptr, nullptr);
    }
}