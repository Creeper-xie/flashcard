#include <string>
#include <yaml-cpp/yaml.h>

namespace yaml = YAML;
using std::string;
namespace cx{
class config {
public:
    config(string file_name) 
        : config_file_name(file_name)
        , config_f(yaml::LoadFile(config_file_name))
        , map_size(config_f["map"].size())
        , name(config_f["name"].as<string>())
        , description(config_f["description"].as<string>())
        {};
    string get_name(){
        return name;
    }
    string get_description(){
        return description;
    }
    int get_map_size(){
        return map_size;
    }
private:
    const string config_file_name;
    const yaml::Node config_f;
    const int map_size;
    const string description;
    const string name;
    };
}
