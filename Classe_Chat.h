/******************************************************************************\
Classe Chat
herite de Animal_Domestique
\******************************************************************************/

#ifndef CHAT_H
#define CHAT_H

#include "Classe_Animal_Domestique.h"

typedef enum t_race_chat { SIAMOIS, PERSAN, RAGDOLL } t_race_chat;

/******************************************************************************/
/* Attributs (variables) de la classe */
typedef struct {
    /* heritage des attributs de Animal_Domestique */
    Animal_Domestique_Attr super;

    /* attributs propres */
    int nb_vies_restantes;
} Chat_Attr;


/******************************************************************************/
/* Classe */
typedef struct {

    /* heritage */
    Animal_Domestique super;

    /* attributs constants */
    t_race_chat race;

    /* objets associés (ref) */

} Chat;


/******************************************************************************/
/* Table des methodes heritees */
extern Animal_Domestique_Meth methodes_chat;


/******************************************************************************/
/* Methodes propre */
void Enlever_Vie( const Chat* this );



#endif
