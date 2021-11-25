#include "QLineEdit_Histo.h"
#include "Historiqu.h"
#include <qDebug>
#include <QKeyEvent>

QLineEdit_Histo::QLineEdit_Histo(int TailleMax)
{
	setFocusPolicy(Qt::StrongFocus);

	this->tailleHisto = TailleMax;

}

void QLineEdit_Histo::insertHisto()
{

}