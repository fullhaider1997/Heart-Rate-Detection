#ifndef MAINGUI_H
#define MAINGUI_H

#include <QMainWindow>
#include "videoprocessorpipline.h"
#include "qthread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainGUI; }
QT_END_NAMESPACE

class MainGUI : public QMainWindow
{
    Q_OBJECT

public:
    MainGUI(QWidget *parent = nullptr);
    ~MainGUI();



private:
    Ui::MainGUI *ui;
    VideoProcessorPipLine * ImageProcessingPipline;
    QThread *threadVideoProcessor;

};
#endif // MAINGUI_H
