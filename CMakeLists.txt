cmake_minimum_required(VERSION 3.24)
project(Renderer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(VULKAN_SDK $ENV{VULKAN_SDK})

include_directories(
    "${CMAKE_SOURCE_DIR}/Renderer/vendor/glfw/include"
    "${CMAKE_SOURCE_DIR}/Renderer/vendor/glm"
    "${VULKAN_SDK}/Include"
)

link_directories(
    "${CMAKE_SOURCE_DIR}/Renderer/vendor/glfw/lib-vc2022"
    "${VULKAN_SDK}/Lib"
)

add_executable(Renderer "Renderer/src/EntryPoint.cpp"
                        "Renderer/src/Application.cpp" "Renderer/src/Application.h" 
                        "Renderer/src/Window/WindowsWindow.cpp" "Renderer/src/Window/WindowsWindow.h")

target_link_libraries(Renderer
    "vulkan-1"
    "glfw3"
)