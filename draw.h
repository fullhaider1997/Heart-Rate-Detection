#ifndef DRAW_H
#define DRAW_H

#include "opencv2/opencv.hpp"
class Draw
{
public:
    Draw();
    void drawRectangleFace(cv::Mat faceFrame);
};

#endif // DRAW_H
