#include "mycustomwidget.h"
#include "mylabel.h"

#include <QMessageBox>

MyCustomWidget::MyCustomWidget(QWidget *parent)
    : QWidget(parent)
{
    MyLabel *lbl = new MyLabel(this);
    lbl->setText("texst");
    //lbl->setStyleSheet("background-color:yellow;");
    lbl->move(10,10);
    lbl->resize(100,50);
    lbl->show();

    connect(lbl, SIGNAL(pressed()), this, SLOT(on_lbl_clicked()));
}

void MyCustomWidget::on_lbl_clicked()
{
    QMessageBox::information(0,"sdssd","sdsdsdsd");
}
void MyCustomWidget::mousePressEvent(QMouseEvent *event)
{
    event->accept();
    QMessageBox::information(0,"sdssd","sdsdsdsd");
}
