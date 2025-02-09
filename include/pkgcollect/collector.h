#include <filesystem>
#include <vector>
#include <string>
#include <iostream>
#ifndef COLLECTOR_H
#define COLLECTOR_H
namespace ghillie575
{
   
    class Library
    {
    public:
        std::string name;
        std::string version;
        std::string license;
        std::string licenseUrl;
        std::string description;
        virtual void install(std::string targetPath);
        virtual void fromJson();
        virtual std::string toJson();
        virtual ~Library() = default;
    };
    class Collector
    {
    private:
        std::string targetPath;
    public:
        Collector(std::string targetPath);
        Collector();
        virtual void addLibrary(std::string name);
        virtual std::vector<Library> fetchLibraries();
         virtual ~Collector() = default;
    };
} // namespace ghillie575
#endif // COLLECTOR_H
