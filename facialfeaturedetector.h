#ifndef FACIALFEATUREDETECTOR_H
#define FACIALFEATUREDETECTOR_H

#include "opencv2/opencv.hpp"
#include <QObject>
#include <dlib/opencv.h>
#include <opencv2/highgui/highgui.hpp>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing/render_face_detections.h>
#include <dlib/image_processing.h>
#include <dlib/gui_widgets.h>
#include "qdebug.h"
class FacialFeatureDetector :public QObject
{
public:
    FacialFeatureDetector();
    virtual ~FacialFeatureDetector();
    std::vector<cv::Point> generateFaceLandMark(cv::Mat faceFrame);
    void notify();

private:

    cv::Rect points;
    cv::Mat copy;
    std::vector<cv::Point> faceLandMarksPoints;
    const int FIRST_FACE;
    std::vector<dlib::rectangle> faces;
    std::vector<dlib::full_object_detection> shapes;
    dlib::frontal_face_detector detector;
    dlib::shape_predictor pose_model;
    dlib::cv_image<dlib::bgr_pixel> cimg;

};

#endif // FACIALFEATUREDETECTOR_H
