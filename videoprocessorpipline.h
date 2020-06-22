#ifndef VIDEOPROCESSORPIPLINE_H
#define VIDEOPROCESSORPIPLINE_H

#include "qobject.h"
#include <QObject>
#include <QDebug>
#include "qpixmap.h"
#include "opencv2/opencv.hpp"
#include "pipelineofalg.h"
class VideoProcessorPipLine : public QObject
{
    Q_OBJECT
public:
    VideoProcessorPipLine ();
    ~VideoProcessorPipLine();
public slots:
    void displayVideo();

signals:
    void display(QPixmap pixmap);
    void finished();
    void error(QString);
private:
    cv::Mat faceFrame;
    VideoProcessorPipLine *ImageProcessingPipline;
    QThread *threadVideoProcessor;
    PipeLineOfAlg *pipLine;



};


#endif // VIDEOPROCESSORPIPLINE_H
