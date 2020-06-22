#include "draw.h"

Draw::Draw()
{

}
void Draw::drawRectangleFace(cv::Mat faceFrame){



      cv::rectangle(faceFrame,cv::Point(200,50),cv::Point(400,300),cv::Scalar(0,0,255),5);

}
