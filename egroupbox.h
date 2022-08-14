#ifndef EGROUPBOX_H
#define EGROUPBOX_H

#include <QGroupBox>
#include "ieqw.h"

class EGroupBox : public QGroupBox, virtual public IEqw
{
    Q_OBJECT

public:
    EGroupBox(QWidget *parent = 0);

    IEQW_DECLARE_METHODS()
};

#endif // EGROUPBOX_H
