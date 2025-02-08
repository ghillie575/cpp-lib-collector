#include <filesystem>
#include <vector>
#include <string>
#include <iostream>

namespace fs = std::filesystem;

void collectPackages(const fs::path &dir, const std::vector<std::string> &packages)
{
    for (const auto &package : packages)
    {
        
    }
}

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cerr << "Usage: " << argv[0] << " <directory> <package1> <package2> ..." << std::endl;
        return 1;
    }

    fs::path dir = argv[1];
    std::vector<std::string> packages;
    for (int i = 2; i < argc; ++i)
    {
        packages.push_back(argv[i]);
    }

    collectPackages(dir, packages);

    return 0;
}