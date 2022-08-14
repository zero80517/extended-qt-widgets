#include "egroupbox.h"
#include "egroupboxplugin.h"

#include <QtPlugin>

EGroupBoxPlugin::EGroupBoxPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void EGroupBoxPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool EGroupBoxPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *EGroupBoxPlugin::createWidget(QWidget *parent)
{
    return new EGroupBox(parent);
}

QString EGroupBoxPlugin::name() const
{
    return QLatin1String("EGroupBox");
}

QString EGroupBoxPlugin::group() const
{
    return QLatin1String("Extended Qt Widgets");
}

QIcon EGroupBoxPlugin::icon() const
{
    return QIcon(QLatin1String(":/letter-e.ico"));
}

QString EGroupBoxPlugin::toolTip() const
{
    return QLatin1String("");
}

QString EGroupBoxPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool EGroupBoxPlugin::isContainer() const
{
    return true;
}

QString EGroupBoxPlugin::domXml() const
{
    return QLatin1String("<widget class=\"EGroupBox\" name=\"eGroupBox\">\n</widget>\n");
}

QString EGroupBoxPlugin::includeFile() const
{
    return QLatin1String("egroupbox.h");
}

