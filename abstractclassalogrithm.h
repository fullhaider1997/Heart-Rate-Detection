#ifndef ABSTRACTCLASSALOGRITHM_H
#define ABSTRACTCLASSALOGRITHM_H

#include "opencv2/opencv.hpp"

class AbstractClassAlogrithm
{
public:
    void virtual excecute(cv::Mat faceFrame) =0;
};

#endif // ABSTRACTCLASSALOGRITHM_H
