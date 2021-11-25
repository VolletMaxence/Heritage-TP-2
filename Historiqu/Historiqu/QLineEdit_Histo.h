#pragma once
#include <QLineEdit>
#include <qDebug>
#include <QVector>
#include <QObject>


class QLineEdit_Histo :
	public QLineEdit
{
	Q_OBJECT
	
	public:
		QLineEdit_Histo(int TailleMax = 10, QWidget *parent = Q_NULLPTR);

	private:
		QVector< QString > tab;
		int tailleHisto;

	public slots:
		void insertHisto();
};

