/******************************************************************************\
Classe abstraite Animal_Domestique
\******************************************************************************/

#ifndef ANIMAL_DOMESTIQUE_H
#define ANIMAL_DOMESTIQUE_H

#include "Classe_Proprietaire.h"

typedef struct _Animal_Domestique Animal_Domestique;


/******************************************************************************/
/* Attributs (variables) de la classe */
typedef struct {
    int age;
} Animal_Domestique_Attr;


/******************************************************************************/
/* Tables des methodes virtuelles */
typedef struct {
    void (*nourrir) ( const Animal_Domestique* );
    void (*afficher) ( const Animal_Domestique* );
} Animal_Domestique_Meth;


/******************************************************************************/
/* Classe */
struct _Animal_Domestique{

    /* attributs variables (ref) */
    Animal_Domestique_Attr* attributs;

    /* table des methodes (ref) */
    const Animal_Domestique_Meth* methodes;

    /* attributs constants */
    char* nom;
    int immatriculation;

    /* objets associés (ref) */
    const struct _Proprietaire* proprio;
};


/******************************************************************************/
/* Methodes */
void Modifier_Age_Animal( const Animal_Domestique* this, int nouv_age );
int Lire_Immatriculation( const Animal_Domestique* this );
char* Lire_Nom( const Animal_Domestique* this );
int Lire_Age( const Animal_Domestique* this );

/******************************************************************************/
/* Methodes virtuelles */
void Nourrir( const Animal_Domestique* this );
void Afficher_Animal_Domestique( const Animal_Domestique* this );


#endif
