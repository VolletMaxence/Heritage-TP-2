#ifndef TOUCHEAPPUYER_H
#define TOUCHEAPPUYER_H

#include <QWidget>
#include <QtGui>
#include <qDebug>

class ToucheAppuyer : public QWidget
{
	Q_OBJECT
	public:
		ToucheAppuyer(QWidget *parent = 0);
		void keyPressEvent(QKeyEvent *);

	protected:

	private:

};

#endif // KEYPRESS_H