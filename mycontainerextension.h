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

    int count() const { return QDesignerContainerExtension::count(); }
    QWidget *widget(int index) const { return QDesignerContainerExtension::widget(index); }
    int currentIndex() const { return QDesignerContainerExtension::currentIndex(); }
    void setCurrentIndex(int index) { QDesignerContainerExtension::setCurrentIndex(index); }
    void addWidget(QWidget *widget) { QDesignerContainerExtension::addWidget(widget); }
    void insertWidget(int index, QWidget *widget) { QDesignerContainerExtension::insertWidget(index,widget); }
    void remove(int index) { QDesignerContainerExtension::remove(index); }

private:
    MyCustomWidget *myWidget;
};

Q_DECLARE_EXTENSION_INTERFACE(MyContainerExtension, "com.mycompany.myproduct.myextension")

#endif // MYCONTAINEREXTENSION_H
