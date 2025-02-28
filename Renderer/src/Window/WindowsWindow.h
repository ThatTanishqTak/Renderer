#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace Engine
{
    class WindowsWindow
    {
        public:
            WindowsWindow(int width, int height, std::string title);
            ~WindowsWindow();

            WindowsWindow(const WindowsWindow &) = delete;
            WindowsWindow &operator = (const WindowsWindow &) = delete;

            bool ShouldClose() { return glfwWindowShouldClose(m_Window); }

        private:
            void InitWindow();
            
        private:
            GLFWwindow* m_Window;

            const int m_Width;
            const int m_Height;
            std::string m_Title;
    };
}