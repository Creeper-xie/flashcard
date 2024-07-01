# 一个简单的五十音记忆抽卡程序

读取Yaml配置文件设置字符串。
默认俩字符串配置文件是日语五十音。

## 安装依赖
本项目依赖于 [yaml-cpp](https://github.com/jbeder/yaml-cpp) 和 支援C++23标准的C++编译器（ GCC 14 或 Clang 17+）

### ArchLinux

> sudo pacman -S yaml-cpp

### Debian

> sudo apt install libyaml-cpp-dev

## 构建

> g++ -std=gnu++23 -lyaml-cpp main.cpp

使用Rust重写的分支：
[Rewrite in Rust](https://github.com/Creeper-xie/flashcard/tree/rust)


使用的库：
[yaml-cpp](https://github.com/jbeder/yaml-cpp)
