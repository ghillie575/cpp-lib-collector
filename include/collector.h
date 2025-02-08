#include <filesystem>
#include <vector>
#include <string>
#include <iostream>
#ifndef COLLECTOR_H
#define COLLECTOR_H
namespace ghillie575
{
    class NetLibrary
    {
        std::string name;
        std::string version;
        std::string downloadUrl;
        std::string license;
        std::string licenseUrl;
        std::string description;
    };
    class NetCollector
    {
        std::vector<NetLibrary> 
    };

} // namespace ghillie575
#endif // COLLECTOR_H
