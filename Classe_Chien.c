/******************************************************************************\
Classe abstraite Chien
herite de Animal_Domestique
\******************************************************************************/

#include "Classe_Chien.h"


/******************************************************************************/
/* Methodes */
/******************************************************************************/
t_race_chien Lire_Race_Chien( const Chien* this )
{
    return this->race;
}
/******************************************************************************/
void Empailler_Chien( const Chien* this )
{
    Chien_Attr* attr = (Chien_Attr*)(this->super.attributs);
    attr->est_empailler = 1;
}
/******************************************************************************/
int Est_Empailler( const Chien* this )
{
    int est_empailler = 0;
    Chien_Attr* attr = (Chien_Attr*)(this->super.attributs);
    if( attr->est_empailler )
    {
        est_empailler = 1;
    }
    return est_empailler;
}
/******************************************************************************/


/******************************************************************************/
/* Methodes virtuelles */
/******************************************************************************/
void Aboyer( const Chien* this )
{
    Chien_Meth* meth = (Chien_Meth*)(this->super.methodes);
    meth->aboyer(this);
}
/******************************************************************************/
