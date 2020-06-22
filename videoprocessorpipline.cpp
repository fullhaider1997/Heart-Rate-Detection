#include "videoprocessorpipline.h"
#include <qpixmap.h>
#include "opencv2/opencv.hpp"
#include "qthread.h"
#include "pipelineofalg.h"
#include "maingui.h"
VideoProcessorPipLine::VideoProcessorPipLine()

   {


   }
VideoProcessorPipLine::~VideoProcessorPipLine(){

}

void VideoProcessorPipLine::displayVideo(){


    qDebug() << "Starting capturing...";

    cv::VideoCapture camera(2);

   PipeLineOfAlg pipline;

    while(camera.isOpened())
    {


        camera >> faceFrame;


        pipline.start(faceFrame);


        emit display(QPixmap::fromImage(
                 QImage(faceFrame.data,
                        faceFrame.cols,
                        faceFrame.rows,
                        faceFrame.step,
                 QImage::Format_RGB888).rgbSwapped()));
         }






 emit finished();
}

