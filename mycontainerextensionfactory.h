#ifndef MYCONTAINEREXTENSIONFACTORY_H
#define MYCONTAINEREXTENSIONFACTORY_H

#include <QObject>
#include <QtDesigner/QExtensionFactory>
#include <QtDesigner/QExtensionManager>

#include "mycontainerextension.h"
#include "mycontainerinterface.h"

class MyContainerExtensionFactory :
    public QExtensionFactory
{
    Q_OBJECT
    Q_INTERFACES(MyContainerInterface) //ExtensionFactory)

public:
    MyContainerExtensionFactory(
    QExtensionManager * parent = nullptr);

protected:
    QObject * createExtension(QObject *object, const QString &iid, QObject * parent) const;
};

#endif // MYCONTAINEREXTENSIONFACTORY_H
