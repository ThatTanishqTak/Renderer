#pragma once

#include "Window/WindowsWindow.h"

namespace Engine
{
    class Application
    {
        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;
    
        public:
            void Run();

        private:
            Engine::WindowsWindow m_Window{ WIDTH, HEIGHT, "Renderer" };
    };
}