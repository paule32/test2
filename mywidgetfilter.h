#ifndef MYWIDGETFILTER_H
#define MYWIDGETFILTER_H

#include <QObject>
#include <QEvent>
#include <QMessageBox>

class MyWidgetFilter : public QObject
{
    Q_OBJECT

public:
    explicit MyWidgetFilter(QObject *parent = nullptr)
        : QObject(parent) { }

protected:
    bool eventFilter(QObject *watched, QEvent *event) override {
        if (event->type() == QEvent::KeyPress) {
            QMessageBox::information(0,"tttttt","dfsdfdsfsd");
            return true;
        }
        return QObject::eventFilter(watched,event);
    }
};

#endif // MYWIDGETFILTER_H
