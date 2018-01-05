#ifndef SEASCAPE_SEGMENTATION_H
#define SEASCAPE_SEGMENTATION_H
#include <opencv2/opencv.hpp>
using namespace cv;


struct DetectorState
{

    Size imgSizeOfEM; //缩放后图像尺寸
};

class SeascapeSegmentation
{
public:
    SeascapeSegmentation();
    ~SeascapeSegmentation();
    void SegmentSeascape(Mat);
    void InitDetectorState();

private:
    Mat resizedImg; //缩放后的图像【Ax1】
    Mat resizedYUVImg; //YUV【Ax】
    void PrepareDataForEM(Mat);
};

#endif // SEASCAPE_SEGMENTATION_H
