#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MyLabel *label2 = new MyLabel(this);
    label2->setFixedWidth(180);
    QString str = "这个重写的控件可以在文字宽度超过标签页的宽度的时候使用省略号且悬浮显示全文，并且悬浮提示可以换行，不会出现很宽很宽的一条提示的情况，而且可以自动适配系统的字体大小。";
    label2->setText(str);
}

MainWindow::~MainWindow()
{
    delete ui;
}

