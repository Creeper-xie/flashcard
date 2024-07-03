#include <iterator>
#include <print>
#include <string>
#include <yaml-cpp/yaml.h>

using std::string;
namespace cx{
class config {
public:
    config(string file_name) 
        : config_file_name(file_name)
        , config_f(YAML::LoadFile(config_file_name))
        , map(config_f["map"])
        , name(config_f["name"].as<string>())
        , description(config_f["description"].as<string>())
        , wrong_message(config_f["wrong_message"].as<string>())
        , right_message(config_f["right_message"].as<string>())
        {
//        config_f = YAML::Null;
    };
    string get_name(){
        return name;
    }
    string get_description(){
        return description;
    }
    int get_map_size(){
        return map.size();
    }
    string get_map_first(const uint location){
        if (location == 0) return map.begin() -> first.as<string>();
        return std::next(map.begin(),location) -> first.as<string>();
    }
    string get_map_second(const uint location){
        if (location == 0) return map.begin() -> second.as<string>();
        return std::next(map.begin(),location) -> second.as<string>();
    }
    void print_wrong_message(string correct){
        std::println("{}{}",wrong_message,correct);
    }
    void print_right_message(){
        std::println("{}",right_message);
    }
private:
    const string config_file_name;
    YAML::Node config_f;
    const YAML::Node map;
    const string description;
    const string name;
    const string wrong_message;
    const string right_message;
    };
}
