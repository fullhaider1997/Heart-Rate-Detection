#ifndef PIPELINEOFALG_H
#define PIPELINEOFALG_H

#include "opencv2/opencv.hpp"
#include "facialfeaturedetector.h"
#include "draw.h"
class PipeLineOfAlg
{
public:
    PipeLineOfAlg();
    void start(cv::Mat);


private:
    FacialFeatureDetector *faceLandMarkDetector;
    Draw drawable;
    std::vector<cv::Point> faceLandMarks;


};

#endif // PIPELINEOFALG_H
