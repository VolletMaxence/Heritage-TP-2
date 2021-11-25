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
#include "QLineEdit_Histo.h"

class Historiqu : 
	public QMainWindow
{
    Q_OBJECT

	public:
		Historiqu(QWidget *parent = Q_NULLPTR);

	private:
		Ui::HistoriquClass ui;
		//QVector<QString> HistoriqueTexte;

		QLineEdit * Texte;
		QLineEdit_Histo * QLineEdit_History;

	public slots:
		void Ajoute();
		void Historique();
		void Suppr();
};
