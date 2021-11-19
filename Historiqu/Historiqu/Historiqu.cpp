#include "Historiqu.h"
#include "QLineEdit_Histo.h"
#include <QLineEdit>

Historiqu::Historiqu(QWidget *parent)
    : QMainWindow(parent)
{
	QLineEdit_Histo QLineEdit_Histo;

    ui.setupUi(this);
	QLineEdit *Texte = new QLineEdit;
	Texte->move(15, 50);
	Texte->resize(100, 20);
	Texte->setParent(this);
}
