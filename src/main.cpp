#include <iostream>
#include <filesystem>

#define STB_IMAGE_IMPLEMENTATION // Keep this (Don't define it again elsewhere when including stb_image).
#include <stb_image.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h> // Don't include me before glad.
#include <glm/glm.hpp>

// Remove this comment when you're ready to distribute your project to others.
// #define READY_TO_DISTRIBUTE

int main()
{
#ifndef READY_TO_DISTRIBUTE
    // Keep this.
    // Ensures the executable runs from the project root.
    std::filesystem::current_path(PROJECT_ROOT);
#endif

    return 0;
}