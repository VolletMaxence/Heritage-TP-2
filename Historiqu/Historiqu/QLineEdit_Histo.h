#pragma once
#include <QLineEdit>
#include <QtWidgets/QApplication>
#include <qDebug>
#include <QVector>
#include <QObject>
#include <QKeyEvent>
#include "Historiqu.h"


class QLineEdit_Histo :
	public QLineEdit
{
	Q_OBJECT

	QVector<QString> tab;
	int tailleHisto;

	public:
		QLineEdit_Histo(int TailleMax = 10);
		//void QLineEdit_Histo::returnPressed(QKeyEvent *touche);

	public slots:
		void insertHisto();
};

