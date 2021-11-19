#include "QLineEdit_Histo.h"
#include <qDebug>

QLineEdit_Histo::QLineEdit_Histo(int TailleMax)
{
	this->tailleHisto = TailleMax;

	QObject::connect(this, SIGNAL(returnPressed()) , this, SLOT(insertHisto()));
}

void QLineEdit_Histo::insertHisto()
{
	qDebug() << "App";
	//Envoyer ce qui a été ecrit

	//Vider ce qui a été écrit
	this->labelMdP->clear();

}