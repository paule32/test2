#ifndef MYCONTAINEREXTENSION_H
#define MYCONTAINEREXTENSION_H

#include <QObject>
#include <QDesignerContainerExtension>

#include "mycustomwidget.h"

class MyContainerExtension :
    public QObject,
    public QDesignerContainerExtension
{
    Q_OBJECT
    Q_INTERFACES(QDesignerContainerExtension)

public:
    MyContainerExtension(MyCustomWidget *widget, QObject *parent = 0);

    int count() const;
    QWidget *widget(int index) const;
    int currentIndex() const;
    void setCurrentIndex(int index);
    void addWidget(QWidget *widget);
    void insertWidget(int index, QWidget *widget);
    void remove(int index);

private:
    MyCustomWidget *myWidget;
};

#endif // MYCONTAINEREXTENSION_H
