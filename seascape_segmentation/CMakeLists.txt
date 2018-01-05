cmake_minimum_required(VERSION 2.8)
#使用C++11编译器进行编译
add_definitions(-std=c++11)
#project(SeascapeSegmentation)
find_package( OpenCV REQUIRED )

#用于将当前目录下的所有源文件的名字保存在变量DIR_SRCS中
#aux_source_directory(. DIR_SRCS)
set(DIR_SRCS "seascape_segmentation.cpp")
#用于源文件DIR_SRCS编译出一个库文件且命名为 seascape_segmentation
add_library(seascape_segmentation ${DIR_SRCS})

