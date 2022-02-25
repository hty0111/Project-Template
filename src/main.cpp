//
// Created by hty on 2/23/22.
//

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
    Mat image = imread("../../image/img.png");
    namedWindow("My image");
    imshow("My image", image);
    waitKey(0);
}
