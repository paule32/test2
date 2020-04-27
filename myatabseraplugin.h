#ifndef MYATABSERAPLUGIN_H
#define MYATABSERAPLUGIN_H

#include <QDesignerCustomWidgetInterface>
#include "mycontainerinterface.h"

namespace MyATabserA {
namespace Internal {

extern char MyContainerExtensionIID[100];

class MyATabserAPlugin :
    public QObject,
    public MyContainerInterface,
    public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(MyContainerInterface)
    //Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    MyATabserAPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool m_initialized;
};

}}
#endif // MYATABSERAPLUGIN_H
