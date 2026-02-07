#include<bits/stdc++.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat image = imread("test.jpg",IMREAD_COLOR);
	namedWindow("微信头像", WINDOW_AUTOSIZE);
    imshow("微信头像",image);
    waitKey(0);
    destroyAllWindows();
    return 0;
}