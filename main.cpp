#include <iostream>
#include <opencv2/opencv.hpp>
#include "seascape_segmentation/seascape_segmentation.h"
using namespace std;
using namespace cv;


int main(int argc, char** argv)
{
    //判断输入参数量是否正确
    if ( argc != 2 )
    {
        printf("usage: <Project_Name> <Image_Path>\n");
        return -1;
    }
    //
    Mat sourceImage = imread( argv[1], 1 );
    if ( !sourceImage.data )
    {
        printf("No image data \n");
        return -1;
    }

    //
    SeascapeSegmentation segmentPicture;
    segmentPicture.SegmentSeascape(sourceImage);
//    namedWindow("Display Image", WINDOW_AUTOSIZE );
//    imshow("Display Image", image);
//    detect_edge_of_sea_simplified();
    waitKey(0);
    return 0;
}
