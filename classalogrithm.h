#ifndef CLASSALOGRITHM_H
#define CLASSALOGRITHM_H

#include "abstractclassalogrithm.h"
class ClassAlogrithm:public AbstractClassAlogrithm {
public:
    ClassAlogrithm() = 0;
    ~ClassAlogrithm() =0;
    void excecute(cv::Mat faceFrame) override;

};

#endif // CLASSALOGRITHM_H
