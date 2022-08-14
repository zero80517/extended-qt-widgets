/**
 * @file elineedit.h
 * @author Emil
 * @brief Contains extended QLineEdit widget
 * @version 0.1
 * @date 2022-08-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ELINEEDIT_H
#define ELINEEDIT_H

#include <QLineEdit>
#include "ieqw.h"

/**
 * @brief Extended QLineEdit widget
 */
class ELineEdit : public QLineEdit, virtual public IEqw
{
    Q_OBJECT

public:
    ELineEdit(QWidget *parent = 0);

    IEQW_DECLARE_METHODS();
};

#endif // ELINEEDIT_H
