#include "Historiqu.h"

Historiqu::Historiqu(QWidget *parent)
    : QMainWindow(parent)
{

	ui.setupUi(this);

	//QLineEdit_History = new QLineEdit_Histo( 10, this );
    
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

	QString initCount = Texte->text();

	qDebug() << "Entrée : " << initCount;
}

void Historiqu::Historique()
{
	qDebug() << "Apute";

}

void Historiqu::Suppr()
{
	qDebug() << "Apebnzfuzfuqzgfui";

}