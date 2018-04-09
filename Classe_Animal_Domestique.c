/******************************************************************************\
Classe abstraite Animal_Domestique
\******************************************************************************/

#include "Classe_Animal_Domestique.h"


/******************************************************************************/
/* Methodes */
/******************************************************************************/
void Modifier_Age_Animal( const Animal_Domestique* this, int nouv_age )
{
    this->attributs->age = nouv_age;
}
/******************************************************************************/
int Lire_Immatriculation( const Animal_Domestique* this )
{
    return this->immatriculation;
}
/******************************************************************************/
char* Lire_Nom( const Animal_Domestique* this )
{
    return this->nom;
}
/******************************************************************************/
int Lire_Age( const Animal_Domestique* this )
{
    return this->attributs->age;
}
/******************************************************************************/


/******************************************************************************/
/* Methodes virtuelles */
/******************************************************************************/
void Nourrir( const Animal_Domestique* this )
{
    this->methodes->nourrir(this);
}
/******************************************************************************/
void Afficher_Animal_Domestique( const Animal_Domestique* this )
{
    this->methodes->afficher(this);
}
/******************************************************************************/
