#include "elineeditplugin.h"
#include "egroupboxplugin.h"
#include "extendedqtwidgets.h"

extendedqtwidgets::extendedqtwidgets(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new ELineEditPlugin(this));
    m_widgets.append(new EGroupBoxPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> extendedqtwidgets::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(extendedqtwidgetsplugin, extendedqtwidgets)
#endif // QT_VERSION < 0x050000
