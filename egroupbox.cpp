#include "egroupbox.h"

EGroupBox::EGroupBox(QWidget *parent) :
    QGroupBox(parent)
{
    tab_ = FindTab(this);
}

IEQW_DEFINE_METHODS(EGroupBox);
