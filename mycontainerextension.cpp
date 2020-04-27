#include "mycontainerextension.h"

MyContainerExtension::
MyContainerExtension(
    MyCustomWidget * dlg
    , QObject *parent)
    : QObject(parent)
    , myWidget(dlg)
{

}
