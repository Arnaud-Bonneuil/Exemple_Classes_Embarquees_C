/******************************************************************************\
Classe Proprietaire
\******************************************************************************/

#ifndef PROPRIETAIRE_H
#define PROPRIETAIRE_H

#include "Classe_Animal_Domestique.h"

typedef struct _Proprietaire Proprietaire;

/******************************************************************************/
/* Attributs (variables) de la classe */
typedef struct {
    int age;
} Proprietaire_Attr;


/******************************************************************************/
/* Classe */
struct _Proprietaire{

    /* attributs variables (ref) */
    Proprietaire_Attr* attributs;

    /* attributs constants */
    int numero_carte_identite;
    char* nom;

    /* objets associés (ref) */
    const struct _Animal_Domestique* animal;
};


/******************************************************************************/
/* Methodes */
void Modifier_Age( const Proprietaire* this, int nouv_age );
void Afficher_Proprietaire( const Proprietaire* this );

#endif
