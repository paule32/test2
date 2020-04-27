#include <QtDesigner/QDesignerPropertySheetExtension>

#include "mycontainerextensionfactory.h"
#include "mycontainerextension.h"
#include "mycustomwidget.h"
#include "myatabseraplugin.h"

MyContainerExtensionFactory::
MyContainerExtensionFactory(
      QExtensionManager * parent)
    : QExtensionFactory(parent)
{

}

QObject *
MyContainerExtensionFactory::createExtension(QObject *object, const QString &iid, QObject * parent) const
{
    if (iid != Q_TYPEID(QDesignerContainerExtension))
    return nullptr;

    if (MyCustomWidget *widget = qobject_cast<MyCustomWidget*>(object))
    return new MyContainerExtension(widget, parent);

    return nullptr;
}
