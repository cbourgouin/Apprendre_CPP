#include "calculatrice.h"
#include "ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
    int colonne=0, ligne=0;
    grille = new QGridLayout();
    afficheur = new QLineEdit();
    historique = new QListWidget();
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    grille->addWidget(afficheur, ligne, colonne, 1, 4);
    grille->addWidget(historique, ligne, 5, 5, 3);
    //text sur les boutons
    for(int i=0; i<NBTOUCHES; i++){
        touches[i] = new QPushButton;
        touches[i]->setText(tablesDesSymboles[i]);
    }
    //ajout des bouton sur la grille
    grille->addWidget(touches[0], 4, 1);
    grille->addWidget(touches[1], 3, 0);
    grille->addWidget(touches[2], 3, 1);
    grille->addWidget(touches[3], 3, 2);
    grille->addWidget(touches[4], 2, 0);
    grille->addWidget(touches[5], 2, 1);
    grille->addWidget(touches[6], 2, 2);
    grille->addWidget(touches[7], 1, 0);
    grille->addWidget(touches[8], 1, 1);
    grille->addWidget(touches[9], 1, 2);
    grille->addWidget(touches[10], 4, 0);
    grille->addWidget(touches[11], 4, 2);
    grille->addWidget(touches[12], 4, 3);
    grille->addWidget(touches[13], 3, 3);
    grille->addWidget(touches[14], 2, 3);
    grille->addWidget(touches[15], 1, 3);
    // la connection avec le onQPushButtonClicked
    for(int i=0; i<NBTOUCHES; i++){
        connect(touches[i], &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    }
    this->setLayout(grille);
}

Calculatrice::~Calculatrice()
{
    delete ui;
    delete afficheur;
    delete grille;
}

void Calculatrice::onQPushButtonClicked()
{
    QPushButton *touche = qobject_cast<QPushButton*>(sender());
    if(touche->text() != "c" && touche->text() != "="){
        afficheur->setText(afficheur->text() + touche->text());
    }
    else
    {
        if(touche->text() == "="){
            QScriptEngine machine;
            QScriptValue result = machine.evaluate(afficheur->text());
            historique->addItem(afficheur->text());
            historique->isRightToLeft();
            afficheur->setText(result.toString());
            historique->isLeftToRight();
            historique->addItem(afficheur->text());
        }
        else
        {
            afficheur->clear();
        }
    }
}

