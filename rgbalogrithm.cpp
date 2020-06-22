#include "rgbalogrithm.h"
#include "opencv2/opencv.hpp"
rgbAlogrithm::rgbAlogrithm()
{

}
rgbAlogrithm::~rgbAlogrithm(){

}
void rgbAlogrithm::excecute(cv::Mat faceFrame){

    for( int y = 0; y < faceFrame.rows; y++ ) {
            for( int x = 0; x < faceFrame.cols; x++ ) {
                for( int c = 0; c < faceFrame.channels(); c++ ) {
                       faceFrame.at<cv::Vec3b>(y,x)[c];

                }
            }
        }
}
