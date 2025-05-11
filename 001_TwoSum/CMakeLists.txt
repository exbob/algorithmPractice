# 规定项目所需的最低 cmake 版本为 3.15
cmake_minimum_required(VERSION 3.15)

# 可以在这里修改项目名称和版本号
project(TwoSum VERSION 1.0)

# 用 main.c 编译生成可执行文件 main，可以修改可执行文件的名称
set(program program)
add_executable(${program} main.c)