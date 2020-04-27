#include "mybtabserb.h"
#include "mybtabserbplugin.h"

#include <QtPlugin>

MyBTabserBPlugin::MyBTabserBPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyBTabserBPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool MyBTabserBPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyBTabserBPlugin::createWidget(QWidget *parent)
{
    return new MyBTabserB(parent);
}

QString MyBTabserBPlugin::name() const
{
    return QLatin1String("MyBTabserB");
}

QString MyBTabserBPlugin::group() const
{
    return QLatin1String("MyTabser");
}

QIcon MyBTabserBPlugin::icon() const
{
    return QIcon();
}

QString MyBTabserBPlugin::toolTip() const
{
    return QLatin1String("xccx");
}

QString MyBTabserBPlugin::whatsThis() const
{
    return QLatin1String("xycxycyxcxyccyxyxcxyc");
}

bool MyBTabserBPlugin::isContainer() const
{
    return false;
}

QString MyBTabserBPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyBTabserB\" name=\"myBTabserB\">\n</widget>\n");
}

QString MyBTabserBPlugin::includeFile() const
{
    return QLatin1String("mybtabserb.h");
}

