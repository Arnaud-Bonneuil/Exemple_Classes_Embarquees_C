/******************************************************************************\
Classe Proprietaire
\******************************************************************************/

#include "Classe_Proprietaire.h"

#include <stdio.h> /* printf */

/******************************************************************************/
/* Methodes */
/******************************************************************************/
void Modifier_Age( const Proprietaire* this, int nouv_age )
{
    this->attributs->age = nouv_age;
}
/******************************************************************************/
void Afficher_Proprietaire( const Proprietaire* this )
{
    printf( "Proprietaire: \n" );
    printf( "    nom : %s\n", this->nom );
    printf( "    cid : %d\n", this->numero_carte_identite );
    printf( "    age : %d\n", this->attributs->age );
    printf( "    animal : %s\n", Lire_Nom( this->animal ) );
    printf( "\n" );
}
/******************************************************************************/
