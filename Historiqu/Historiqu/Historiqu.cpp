#include "Historiqu.h"
#include "QLineEdit_Histo.h"
#include <QLineEdit>
#include <qDebug>

Historiqu::Historiqu(QWidget *parent)
    : QMainWindow(parent)
{
	QLineEdit_Histo QLineEdit_Histo;
    ui.setupUi(this);
	QLineEdit *Texte = new QLineEdit;
	Texte->move(15, 50);
	Texte->resize(100, 20);
	Texte->show();
	Texte->setParent(this);

	connect(Texte, SIGNAL(returnPressed()), this, SLOT(Ajoute()));
}

void Historiqu::Ajoute()
{
	//Avoir ce qui est dans le label
	qDebug() << "PUTE";

}

void Historiqu::Historique()
{
	qDebug() << "Apute";

}

void Historiqu::Suppr()
{
	qDebug() << "Apebnzfuzfuqzgfui";

}