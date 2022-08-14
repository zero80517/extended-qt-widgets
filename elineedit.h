#ifndef ELINEEDIT_H
#define ELINEEDIT_H

#include <QLineEdit>
#include "ieqw.h"

class ELineEdit : public QLineEdit, virtual public IEqw
{
    Q_OBJECT

public:
    ELineEdit(QWidget *parent = 0);

    IEQW_DECLARE_METHODS();
};

#endif // ELINEEDIT_H
