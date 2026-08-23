#include <iostream>
#include <filesystem>

int main()
{
#ifndef NDEBUG
    // Keep this.
    // This make the executable behave like it's in the assets folder.
    // Which make assets loading easier.
    std::filesystem::current_path(std::filesystem::path(PROJECT_ROOT) / "assets");
#endif

    return 0;
}