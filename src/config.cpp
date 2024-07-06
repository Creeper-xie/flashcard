#include <iterator>
#include <print>
#include <string>
#include <yaml-cpp/yaml.h>

#include "config.hpp"

using std::string;
     const void init_config(string file_name){
          const string config_file_name = file_name;
        {
            const YAML::Node config_sources = YAML::LoadFile(config_file_name);
             const YAML::Node map = config_sources["map"];
             const string name = config_sources["name"].as<string>();
             const string description = config_sources["description"].as<string>();
             const string wrong_message = config_sources["wrong_message"].as<string>();
             const string right_message = config_sources["right_message"].as<string>();
        }
    }
     const string get_map_first(const uint location){
        if (location == 0) return map.begin() -> first.as<string>();
        return std::next(map.begin(),location) -> first.as<string>();
    }
     const string get_map_second(const uint location){
        if (location == 0) return map.begin() -> second.as<string>();
        return std::next(map.begin(),location) -> second.as<string>();
    }
     const void print_wrong_message(string correct){
        std::println("{}{}",wrong_message,correct);
    }
     const void print_right_message(){
        std::println("{}",right_message);
    }
