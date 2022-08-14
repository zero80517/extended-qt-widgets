/**
 * @file egroupbox.h
 * @author Emil
 * @brief Contains extended QGroupBox widget
 * @version 0.1
 * @date 2022-08-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef EGROUPBOX_H
#define EGROUPBOX_H

#include <QGroupBox>
#include "ieqw.h"

/**
 * @brief Extended QGroupBox widget
 */
class EGroupBox : public QGroupBox, virtual public IEqw
{
    Q_OBJECT

public:
    EGroupBox(QWidget *parent = 0);

    IEQW_DECLARE_METHODS()
};

#endif // EGROUPBOX_H
