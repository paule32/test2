#include "myatabseraplugin.h"
#include "mybtabserbplugin.h"
#include "tabsercollection.h"

TabserCollection::TabserCollection(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new MyATabserA::Internal::MyATabserAPlugin(this));
    m_widgets.append(new MyBTabserBPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> TabserCollection::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(tabsercollectionplugin, TabserCollection)
#endif // QT_VERSION < 0x050000
