#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Historiqu.h"
#include <qDebug>
#include <QLineEdit>
#include <QtWidgets/QApplication>
#include <qDebug>
#include <QVector>
#include <QObject>
#include <QKeyEvent>

class Historiqu : 
	public QMainWindow
{
    Q_OBJECT
	private:
		Ui::HistoriquClass ui;
		QVector<QString> HistoriqueTexte;

	public:
		Historiqu(QWidget *parent = Q_NULLPTR);


	public slots:
		void Ajoute();
		void Historique();
		void Suppr();
};
