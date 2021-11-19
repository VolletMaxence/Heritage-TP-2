#pragma once
#include <QLineEdit>
#include <QtWidgets/QApplication>
#include <qDebug>
#include <QVector>
#include <QObject>

class QLineEdit_Histo :
	public QLineEdit
{
	Q_OBJECT

	QVector<QString> tab;
	int tailleHisto;

	public:
		QLineEdit_Histo(int TailleMax = 10);

	public slots:
		void insertHisto();
};

