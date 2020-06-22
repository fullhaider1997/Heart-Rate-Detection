#include "pipelineofalg.h"
#include "opencv2/highgui.hpp"

PipeLineOfAlg::PipeLineOfAlg()
       :
      faceLandMarkDetector(new FacialFeatureDetector)

{

}
void PipeLineOfAlg::start(cv::Mat faceFrame){

          cv::flip(faceFrame,faceFrame,+1);
          faceLandMarks = faceLandMarkDetector->generateFaceLandMark(faceFrame);
          //drawable.drawRectangleFace(faceFrame);

          cv::Rect2d r =






}
