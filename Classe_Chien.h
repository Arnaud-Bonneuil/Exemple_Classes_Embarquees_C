/******************************************************************************\
Classe abstraite Chien
herite de Animal_Domestique
\******************************************************************************/

#ifndef CHIEN_H
#define CHIEN_H

#include "Classe_Animal_Domestique.h"

typedef struct _Chien Chien;

typedef enum t_race_chien { COCKER, COLLET, EPAGNEUL } t_race_chien;

/******************************************************************************/
/* Attributs (variables) de la classe */
typedef struct {

    /* heritage des attributs de Animal_Domestique */
    Animal_Domestique_Attr super;

    /* attributs propres */
    unsigned int est_empailler:1;

} Chien_Attr;


/******************************************************************************/
/* Tables des methodes virtuelles */
typedef struct {

    /* heritage des methodes virtuelles de Animal_Domestique */
    Animal_Domestique_Meth super;

    /* methodes virtuelles de la classe Chien */
    void (*aboyer) ( const Chien* );

} Chien_Meth;


/******************************************************************************/
/* Classe */
struct _Chien {

    /* heritage */
    Animal_Domestique super;

    /* attributs constants */
    t_race_chien race;

    /* objets associés (ref) */

};


/******************************************************************************/
/* Methodes */
t_race_chien Lire_Race_Chien( const Chien* this );
void Empailler_Chien( const Chien* this );
int Est_Empailler( const Chien* this );


/******************************************************************************/
/* Methodes virtuelles */
void Aboyer( const Chien* this );



#endif
