#include "elineedit.h"

ELineEdit::ELineEdit(QWidget *parent) :
    QLineEdit(parent)
{
    tab_ = FindTab(this);
}

IEQW_DEFINE_METHODS(ELineEdit);
