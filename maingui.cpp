#include "maingui.h"
#include "ui_maingui.h"
#include "videoprocessorpipline.h"
MainGUI::MainGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainGUI),
      ImageProcessingPipline(new VideoProcessorPipLine),
      threadVideoProcessor( new QThread)

{
    ui->setupUi(this);


    ImageProcessingPipline->moveToThread(threadVideoProcessor);

    connect(ImageProcessingPipline, SIGNAL(error(QString)), this, SLOT(errorString(QString)));
    connect( threadVideoProcessor, SIGNAL(started()), ImageProcessingPipline, SLOT(displayVideo()));
    connect( threadVideoProcessor, SIGNAL(finished()), threadVideoProcessor, SLOT(deleteLater()));
    connect(ImageProcessingPipline, SIGNAL(finished()),  threadVideoProcessor, SLOT(quit()));
    connect(ImageProcessingPipline, SIGNAL(finished()), ImageProcessingPipline, SLOT(deleteLater()));
    connect( threadVideoProcessor, SIGNAL(started()), ImageProcessingPipline, SLOT(displayVideo()));
    connect(ImageProcessingPipline,SIGNAL(display(QPixmap)),ui->web_cam_label,SLOT(setPixmap(QPixmap)));

    threadVideoProcessor->start();


}

MainGUI::~MainGUI()
{
    delete ui;
}

