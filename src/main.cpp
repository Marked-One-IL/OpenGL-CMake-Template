#include <iostream>
#include <filesystem>

#define STB_IMAGE_IMPLEMENTATION // Keep this (Don't define it again elsewhere when including stb_image).
#include <stb_image.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h> // Don't include me before glad.
#include <glm/glm.hpp>

int main()
{
#ifndef NDEBUG
    // Keep this.
    // This makes the executable behave like it's in the assets directory.
    // Which makes assets loading easier.
    std::filesystem::current_path(std::filesystem::path(PROJECT_ROOT) / "assets");
#endif

    return 0;
}