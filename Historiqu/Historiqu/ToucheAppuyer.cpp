#include "ToucheAppuyer.h"

#include <QApplication>
#include <QKeyEvent>
#include <qDebug>

ToucheAppuyer::ToucheAppuyer(QWidget *parent) :
	QWidget(parent)
{
	qDebug() << "grghreghrb gbrezgbnhqjgeiop";


}

void ToucheAppuyer::keyPressEvent(QKeyEvent *event)
{
	qDebug() << "fre gbrezgbnhqjgeiop";

	if (event->key() == Qt::Key_Escape)
	{
		qDebug() << "grebuyhserh";
	}
}