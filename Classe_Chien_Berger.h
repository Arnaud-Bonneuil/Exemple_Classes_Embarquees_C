/******************************************************************************\
Classe Chien_Berger
herite de Chien
\******************************************************************************/

#ifndef CHIEN_BERGER_H
#define CHIEN_BERGER_H

#include "Classe_Chien.h"

/******************************************************************************/
/* Attributs (variables) de la classe */
typedef struct {

    /* heritage des attributs de Chien */
    Chien_Attr super;

    /* attributs propres */
    int nb_moutons;

} Chien_Berger_Attr;


/******************************************************************************/
/* Classe */
typedef struct {

    /* heritage */
    Chien super;

    /* attributs constants */

    /* objets associés (ref) */

} Chien_Berger;


/******************************************************************************/
/* Table des methodes heritees */
extern Chien_Meth methodes_chien_berger;


/******************************************************************************/
/* Methodes propre */
void Rassembler_Troupeau( const Chien_Berger* this );


#endif
