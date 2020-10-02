#include "horloge.h"

/**
 * @brief Horloge::Horloge
 * @details Constructeur de la classe Horloge
 * @param _nbMode
 * @param _resolution
 */
Horloge::Horloge(int _nbMode, int _resolution):
    heure(0),
    minute(0),
    nbMode(_nbMode),
    resolution(_resolution),
    mode(AUCUN_REGLAGE)
{
    leCadran = new Cadran(5, 5);
    leClavier = new Clavier();
    valAvant = time(NULL);
}

/**
 * @brief Horloge::~Horloge
 * @details Destructeur de la classe horloge
 */
Horloge::~Horloge()
{
    delete leCadran;
    delete leClavier;
}

/**
 * @brief Horloge::AvancerMinutes
 * @details Avancement des minutes et verification du passage d'une heure
 * @return
 */
bool Horloge::AvancerMinutes()
{
    bool retour = false;
    if(minute == 59){
        retour = true;
        minute = 0;
    }else{
        minute++;
    }
    return retour;
}

/**
 * @brief Horloge::AvancerHeures
 * @details faire avancer l'heure en fonction de la resolutions et verifier le passage de journée ou de demi journée
 * @return
 */
bool Horloge::AvancerHeures()
{
    bool retour = false;
    if(resolution == 24){
        if(heure == 23){
            retour = true;
            heure = 0;
        }else{
            heure++;
        }
    }else{
        if(heure == 12){
            retour = true;
            heure = 1;
        }else{
            heure++;
        }
    }
    return retour;
}

/**
 * @brief Horloge::ChangerMode
 * @details changer le mode actuelle
 */
void Horloge::ChangerMode()
{
    mode = (mode + 1)%nbMode;
}

/**
 * @brief Horloge::ReculerHeure
 * @details reculer les heures
 */
void Horloge::ReculerHeure()
{
    if(resolution == 24){
        if(heure == 0){
            heure = 23;
        }else{
            heure--;
        }
    }else{
        if(heure == 1){
            heure = 12;
        }else{
            heure--;
        }
    }
}
/**
 * @brief Horloge::ReculerMinute
 * @details reculers les minutes
 */
void Horloge::ReculerMinute()
{
    if(minute == 0){
        minute = 59;
    }else{
        minute--;
    }
}

/**
 * @brief Horloge::ActualiserHeure
 * @details verifications q'une minute c'est ecouler
 */
void Horloge::ActualiserHeure()
{
    time_t valCourante = time(NULL);
    double seconde = difftime(valCourante, valAvant);
    if(seconde > 60){
        valAvant = valCourante;
        if(AvancerMinutes())
            AvancerHeures();
    }
}

/**
 * @brief Horloge::Controler
 * @details cade principal de la classe
 * @param _laTouche
 * @return
 */
TOUCHES_CLAVIER Horloge::Controler(TOUCHES_CLAVIER _laTouche)
{
    _laTouche = leClavier->ScruterClavier();
    if(_laTouche == MODE){
        ChangerMode();
    }

    switch (mode) {
    case AUCUN_REGLAGE : ActualiserHeure();
        leCadran->Afficher(heure, 1);
        leCadran->Afficher(minute, 4);
        break;
    case REGLAGE_HEURES : if(_laTouche == PLUS){
            AvancerHeures();
        }else{
            if(_laTouche == MOINS){
                ReculerHeure();
            }
        }
        leCadran->Afficher("HH", 1);
        leCadran->Afficher(heure, 4);
        break;
    case REGLAGE_MINUTES : if(_laTouche == PLUS){
            AvancerMinutes();
        }else{
            if(_laTouche == MOINS){
                ReculerMinute();

            }
        }
        leCadran->Afficher("MM", 1);
        leCadran->Afficher(minute, 4);
        break;

    }
    return _laTouche;
}
