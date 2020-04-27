#ifndef MYLABEL_H
#define MYLABEL_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QMouseEvent>
#include <QMessageBox>

class MyLabel : public QPushButton
{
    Q_OBJECT
public:
    MyLabel(QWidget * parent = nullptr)
        : QPushButton(parent) {
        connect(this,SIGNAL(pressed()),this,SLOT(doSome()));
    }
private slots:
    void doSome() { QMessageBox::information(0,"122112","56565656565656"); }
protected:
    void mousePressEvent(QMouseEvent * event) {
        QMessageBox::information(0,"dsfd","121212121212");
        event->accept();
    }
};

#endif // MYLABEL_H
