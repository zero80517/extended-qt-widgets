#include "elineedit.h"
#include "elineeditplugin.h"

#include <QtPlugin>

ELineEditPlugin::ELineEditPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void ELineEditPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool ELineEditPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *ELineEditPlugin::createWidget(QWidget *parent)
{
    return new ELineEdit(parent);
}

QString ELineEditPlugin::name() const
{
    return QLatin1String("ELineEdit");
}

QString ELineEditPlugin::group() const
{
    return QLatin1String("Extended Qt Widgets");
}

QIcon ELineEditPlugin::icon() const
{
    return QIcon(QLatin1String(":/letter-e.ico"));
}

QString ELineEditPlugin::toolTip() const
{
    return QLatin1String("");
}

QString ELineEditPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool ELineEditPlugin::isContainer() const
{
    return false;
}

QString ELineEditPlugin::domXml() const
{
    return QLatin1String("<widget class=\"ELineEdit\" name=\"eLineEdit\">\n</widget>\n");
}

QString ELineEditPlugin::includeFile() const
{
    return QLatin1String("elineedit.h");
}

