#ifndef _CONFIG_CPP_
#define _CONFIG_CPP_

#include <print>
#include <string>
#include <yaml-cpp/yaml.h>

using std::string;
// Functions
     const void init_config(string file_name);

     const string get_map_first(const uint location);
     const string get_map_second(const uint location);
     const void print_right_message();
     const void print_wrong_message(string correct);
     const void print_timeout_message();

// Variable

     const string config_file_name;
     const YAML::Node map;
     const string description;
     const string name;
     const string wrong_message;
     const string timeout_message;
     const string right_message;
#endif
