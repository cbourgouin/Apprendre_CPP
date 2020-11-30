

#include "digicode.h"
#include "ui_digicode.h"

/**
 * @brief Digicode::Digicode
 * @details constructeur de Digicode
 * @param parent
 */
Digicode::Digicode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Digicode)
{
    ui->setupUi(this);

    int colonne=0,ligne=0;
    grille=new QGridLayout(this);
    afficheur=new QLineEdit(this);
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    afficheur->setEchoMode(QLineEdit::Password);
    afficheur->setMinimumHeight(80);
    grille->addWidget(afficheur,ligne,colonne,1,3);
    QString TableDesSymboles[4][3] = {{"7","8","9"},{"4","5","6"},{"1","2","3"},{"On","0","Ok"}};
    for(ligne=0; ligne<NBLIGNE; ligne++)
    {
        for(colonne=0; colonne<NBCOLONNE; colonne++)
        {
            touches[ligne][colonne]=new QPushButton;
            touches[ligne][colonne]->setText(TableDesSymboles[ligne][colonne]);
            touches[ligne][colonne]->setMaximumWidth(80);
            touches[ligne][colonne]->setMinimumHeight(80);
            touches[ligne][colonne]->setStyleSheet("background-color: rgb(136, 138, 133);");
            grille->addWidget(touches[ligne][colonne], ligne+1, colonne);
            connect(touches[ligne][colonne], &QPushButton::clicked, this, &Digicode::onQPushButtonClicked);
        }
    }
    this->setLayout(grille);

    laPorte = new Porte();
    laPorte->show();

    tempoGache = new QTimer(this);
    tempoVerrouillage = new QTimer(this);
    tempoGache->setSingleShot(true);
    connect(tempoGache, &QTimer::timeout, this, &Digicode::onTimerTempoGache_timeout);
    connect(tempoVerrouillage, &QTimer::timeout, this, &Digicode::onTimerTempoVerrouillage_timeout);

    compteur = 0;

    leBoutonPousoir = new BoutonPoussoir();
    leBoutonPousoir->show();
    connect(leBoutonPousoir, &BoutonPoussoir::action, this, &Digicode::onBoutonPoussoirActionne);
}

/**
 * @brief Digicode::~Digicode
 * @details Destructeur de digicode
 */
Digicode::~Digicode()
{
    delete ui;
}

/**
 * @brief Digicode::onQPushButtonClicked
 * @details permet la saisie du code, sa validation est sa remise a zero
 */
void Digicode::onQPushButtonClicked()
{
    QPushButton *touche = qobject_cast<QPushButton*>(sender());
    if(touche->text() >= "0" && touche->text() <= "9")
    {
        code+=touche->text();
        afficheur->setText(code);
    }
    if(touche->text() == "Ok")
    {
        if(code == codeSecret)
        {
            laPorte->deverrouiller();
            tempoGache->start(3000);
        }
        else
       {
            laPorte->verrouiller();
            compteur++;
            if(compteur == 3){
                for(int ligne=0; ligne<NBLIGNE; ligne++)
                {
                    for(int colonne=0; colonne<NBCOLONNE; colonne++)
                    {
                        touches[ligne][colonne]->setEnabled(false);
                    }
                }
                tempoVerrouillage->start(60000);
                compteur = 0;
            }
            code="";
            afficheur->setText(code);
        }

    }
    if(touche->text() == "On"){
        code="";
        afficheur->setText(code);
    }
}

/**
 * @brief Digicode::onTimerTempoGache_timeout
 * @details Timer du deverrouillage la porte
 */
void Digicode::onTimerTempoGache_timeout()
{
    laPorte->verrouiller();
}

/**
 * @brief Digicode::onTimerTempoVerrouillage_timeout
 * @details Timer du verouillage du Digicode
 */
void Digicode::onTimerTempoVerrouillage_timeout()
{
    for(int ligne=0; ligne<NBLIGNE; ligne++)
    {
        for(int colonne=0; colonne<NBCOLONNE; colonne++)
        {
            touches[ligne][colonne]->setEnabled(true);
        }
    }
}

/**
 * @brief Digicode::onBoutonPoussoirActionne
 * @details deverouillage de la porte par l'interieur du batimment
 */
void Digicode::onBoutonPoussoirActionne()
{
    laPorte->deverrouiller();
    tempoGache->start(3000);
}



