#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Historiqu.h"

class Historiqu : public QMainWindow
{
    Q_OBJECT

public:
    Historiqu(QWidget *parent = Q_NULLPTR);

private:
    Ui::HistoriquClass ui;
};
