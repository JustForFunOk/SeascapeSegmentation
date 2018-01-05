#include "seascape_segmentation.h"
#include <opencv2/opencv.hpp>
using namespace cv;

//用于存放
struct DetectorState g_detectorState ={
    .imgSizeOfEM = {50, 50}
};


//构造函数
SeascapeSegmentation::SeascapeSegmentation()
{

}

//析构函数
SeascapeSegmentation::~SeascapeSegmentation()
{

}

//初始化结构体内的变量detector_state
void SeascapeSegmentation::InitDetectorState()
{
//    g_detectorState.imgSizeOfEM = {50, 50};
}

//程序运行的整个流程
void SeascapeSegmentation::SegmentSeascape(Mat srcImg)
{
    InitDetectorState(); //初始化结构体内的变量
    PrepareDataForEM(srcImg);
}

//初始化数据，为EM作准备
void SeascapeSegmentation::PrepareDataForEM(Mat srcImg)
{
    //使用双线性插值将图片缩放至50x50
    resize(srcImg, resizedImg, g_detectorState.imgSizeOfEM, 0, 0, INTER_LINEAR);
    //将RGB转换为YUV
    cvtColor(resizedImg, resizedYUVImg, COLOR_RGB2YUV);
    //显示
    imshow("YUV", resizedYUVImg);
}
