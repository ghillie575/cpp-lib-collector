#include <filesystem>
#include <vector>
#include <string>
#include <iostream>
#include <pkgcollect/collector.h>
#include <cpphttplib/httplib.h>
#ifndef NET_COLLECTOR_H
#define NET_COLLECTOR_H
namespace ghillie575
{
    namespace collectors
    {
        class NetLibrary : public Library
        {

        public:
            NetLibrary();
            std::string name;
            std::string version;
            std::string downloadUrl;
            std::string license;
            std::string licenseUrl;
            std::string description;
            void fromJson() override;
            void install(std::string targetPath) override;
        };
        class NetCollector : public Collector
        {
        private:
            httplib::Client *cli;
            std::vector<NetLibrary> libraries;
            std::string targetPath;
            std::string fetchUrl;

        public:
            NetCollector(std::string targetPath, std::string fetchUrl);
            void addLibrary(std::string name) override;
            std::vector<Library> fetchLibraries() override;
        };
    }
}
#endif