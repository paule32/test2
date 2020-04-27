#include "myatabsera.h"
#include "myatabseraplugin.h"

#include <QtPlugin>
#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtDesigner/QExtensionFactory>

#include "mywidgetfilter.h"
#include "mycontainerextension.h"
#include "mycontainerextensionfactory.h"
#include "mycontainerinterface.h"

namespace MyATabserA {
namespace Internal {

char MyContainerExtensionIID[] = "net.kallup.qt.test1";

MyATabserAPlugin::MyATabserAPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyATabserAPlugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    QExtensionManager *manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    manager->registerExtensions(new MyContainerExtensionFactory(manager),
    Q_TYPEID(MyContainerInterface));

    m_initialized = true;
}

bool MyATabserAPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyATabserAPlugin::createWidget(QWidget *parent)
{
    return new MyATabserAWidget(parent);
}

QString MyATabserAPlugin::name() const
{
    return QLatin1String("MyATabserA");
}

QString MyATabserAPlugin::group() const
{
    return QLatin1String("MyTabser");
}

QIcon MyATabserAPlugin::icon() const
{
    return QIcon();
}

QString MyATabserAPlugin::toolTip() const
{
    return QLatin1String("ssd");
}

QString MyATabserAPlugin::whatsThis() const
{
    return QLatin1String("sdsdsd");
}

bool MyATabserAPlugin::isContainer() const
{
    return true;
}

QString MyATabserAPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyATabserA\" name=\"myATabserA\">\n</widget>\n");
}

QString MyATabserAPlugin::includeFile() const
{
    return QLatin1String("myatabsera.h");
}

}}
