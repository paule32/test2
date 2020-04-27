#ifndef MYATABSERA_H
#define MYATABSERA_H

#include <QWidget>
#include <QMouseEvent>

#include <QMessageBox>

#include "mycustomwidget.h"

class MyTestClass: public MyCustomWidget
{
    Q_OBJECT

public:
    MyTestClass(QWidget *parent = nullptr)
        : MyCustomWidget(parent) {

    }
};

class MyATabserAWidget : public QWidget
{
    Q_OBJECT

public:
    MyATabserAWidget(QWidget *parent = 0) : QWidget(parent) {
        setMouseTracking(true);
        setAttribute(Qt::WA_StaticContents);
        setAttribute(Qt::WA_NoBackground);

        MyTestClass * tst = new MyTestClass(this);
    }
};

#endif // MYATABSERA_H
