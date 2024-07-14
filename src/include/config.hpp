#ifndef _CONFIG_CPP_
#define _CONFIG_CPP_

#include "yaml-cpp/node/node.h"
#include <print>
#include <string>
#include <yaml-cpp/yaml.h>

using std::string;
namespace cx{
    struct Config{
// Functions
       Config(YAML::Node config_source);

       const string get_map_first(const uint* location);
       const string get_map_second(const uint* location);
       void print_right_message();
       void print_wrong_message(const string correct);
       void print_timeout_message();

// Variable

         const YAML::Node map;
         const string description;
         const string name;
         const string wrong_message;
         const string timeout_message;
         const string right_message;
    };
}
#endif
