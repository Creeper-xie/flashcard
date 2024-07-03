#include <iostream>
#include <ostream>
#include <print>
#include <string>

#include "config.hpp"
#include "random.cpp"

using namespace cx;

static uint all_times = 0;
static uint right_times = 0;
static uint wrong_times = 0;
static string input;
int random_num;

int main(const int argc,const char* argv[]){
//    std::vector<std::string> args(argv + 1, argv + argc);
    if (argc != 2){
    std::println("没有指定配置文件！请使用命令行参数！\n 示例：\n ./本程序 配置文件");
    return -1;
    }
    config _config{string(argv[1])};
    std::println("配置文件加载成功喵！QwQ\n 名字：{} \n 描述：{}",
          _config.get_name(),
          _config.get_description());
    while(true){
        random_num = get_random(0,_config.get_map_size() - 1);
        all_times++;
        std::println("第 {} 个是 {} 哦",std::to_string(all_times),_config.get_map_first(random_num));
        std::cin >> input;
        if ( input != _config.get_map_second(random_num)){
            _config.print_wrong_message(_config.get_map_second(random_num));
            wrong_times++;
        }   else if(input == _config.get_map_second(random_num)){
            _config.print_right_message();
            right_times++;
        }
    }
}
