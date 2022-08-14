/**
 * @file ieqw.h
 * @author Emil
 * @brief Contains interface for Extended Qt Widgets
 * @version 0.1
 * @date 2022-08-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef IEQW_H
#define IEQW_H

#include <QWidget>

#define IEQW_DEFINE_FIND_TAB(classname)                                               \
QWidget* classname::FindTab(QWidget* widget)                                          \
{                                                                                     \
    static QWidget* tab = 0;                                                          \
                                                                                      \
    widget = widget->parentWidget();                                                  \
    if (widget && QString(widget->metaObject()->className()) == QString("QWidget")) { \
        tab = widget;                                                                 \
        return FindTab(widget);                                                       \
    }                                                                                 \
    if (widget && QString(widget->metaObject()->className()) != QString("QTabWidget"))\
        return FindTab(widget);                                                       \
    return tab;                                                                       \
}                                                                                     \

#define IEQW_DEFINE_IS_VISIBLE_ON_TAB(classname)\
bool classname::IsVisibleOnTab()                \
{                                               \
    return this->isVisibleTo(tab_);             \
}                                               \

#define IEQW_DECLARE_METHODS()             \
QWidget* FindTab(QWidget* widget) override;\
bool IsVisibleOnTab() override;            \

#define IEQW_DEFINE_METHODS(classname)  \
IEQW_DEFINE_FIND_TAB(classname)         \
IEQW_DEFINE_IS_VISIBLE_ON_TAB(classname)\

/**
 * @brief Interface for Extended Qt Widgets.
 */
class IEqw
{
public:
    /**
     * @brief Find the tab who owns the current widget.
     */
    virtual QWidget* FindTab(QWidget* widget) = 0;
    /**
     * @brief Is widget visible on tab when it's opened (like user opens tab)
     */
    virtual bool IsVisibleOnTab() = 0;

    QWidget* tab_ = 0; ///< tab where the widget lies
};

#endif // IEQW_H
