cmake_minimum_required(VERSION 2.8)
#用于指定项目的名称SeascapeSegmentation
project(SeascapeSegmentation)
#使用C++11编译器进行编译
add_definitions(-std=c++11)
#REQUIRED表示如果找不到OpenCV包，将停止处理并显示错误消息。
find_package( OpenCV REQUIRED )
#用于将当前目录下的所有源文件的名字保存在变量DIR_SRCS中
#aux_source_directory(. DIR_SRCS)
set(DIR_SRCS "main.cpp")
#用于添加一个需要进行构建的子目录seascape_segmentation
add_subdirectory(seascape_segmentation)
#用于从源文件DIR_SRCS编译出一个可执行文件且命名为${PROJECT_NAME}
add_executable(${PROJECT_NAME} ${DIR_SRCS})
#用于指定${PROJECT_NAME} 需要链接${OpenCV_LIBS}和seascape_segmentation
target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )
target_link_libraries( ${PROJECT_NAME} seascape_segmentation )
