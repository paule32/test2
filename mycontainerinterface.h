#ifndef MYCONTAINERINTERFACE_H
#define MYCONTAINERINTERFACE_H

#include <QtPlugin>

class MyContainerInterface
{
public:
    virtual ~MyContainerInterface() = default;
};

#define MyContainerInterface_iid "net.kallup.qt.test1"
Q_DECLARE_INTERFACE(MyContainerInterface, MyContainerInterface_iid)


#endif // MYCONTAINERINTERFACE_H
