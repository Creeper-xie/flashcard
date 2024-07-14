#include <iterator>
#include <print>
#include <string>
#include <yaml-cpp/yaml.h>

#include "config.hpp"

namespace cx{
using std::string;
    cx::Config::Config(YAML::Node config_source) : 
        map(config_source["map"]),
        name(config_source["name"].as<string>()),
        description(config_source["description"].as<string>()),
        wrong_message(config_source["wrong_message"].as<string>()),
        right_message(config_source["right_message"].as<string>())
        {
            if(map.IsNull()) std::println("配置文件加载失败QAQ"); 
}

    const string cx::Config::get_map_first(const uint* location){
        return std::next(map.begin(),*location) -> first.as<string>();
    }
    const string cx::Config::get_map_second(const uint* location){
        return std::next(map.begin(),*location) -> second.as<string>();
    }
    void cx::Config::print_wrong_message(string correct){
        std::println("{}{}",wrong_message,correct);
    }
    void cx::Config::print_right_message(){
        std::println("{}",right_message);
    }
}
