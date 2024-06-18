#include <string>
#include <print>

#include "config.hpp"
#include "random.cpp"

using namespace cx;

int main(const int argc,const char* argv[]){
//    std::vector<std::string> args(argv + 1, argv + argc);
    if (argc != 2){
    std::print("没有指定配置文件！请使用命令行参数！\n 示例：\n ./本程序 配置文件 \n");
    return -1;
    }
    config _config{string(argv[1])};
    print("配置文件加载成功喵！\n 名字：{} \n 描述：{}",
          _config.get_name(),
          _config.get_description());
}
