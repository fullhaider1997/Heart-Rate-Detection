#ifndef RGBALOGRITHM_H
#define RGBALOGRITHM_H

#include "opencv2/opencv.hpp"
#include "abstractclassalogrithm.h"
class rgbAlogrithm : public AbstractClassAlogrithm
{
public:
    rgbAlogrithm();
    ~rgbAlogrithm();
    void excecute(cv::Mat faceFrame) override;
};

#endif // RGBALOGRITHM_H
