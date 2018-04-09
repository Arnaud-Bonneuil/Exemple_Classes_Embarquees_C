#include <stdio.h> /* printf, getchar */
#include <stdlib.h> /* EXIT_SUCCESS */

#include "Classe_Proprietaire.h"
#include "Classe_Chat.h"
#include "Classe_Chien_Berger.h"

extern const Chat chat_1;
extern const Proprietaire proprio_1;

/******************************************************************************/
/* Proprio 1 */
Proprietaire_Attr attr_proprio_1 = {
    /* age */
    34
};

const Proprietaire proprio_1 = {

    /* attributs variable */
    &attr_proprio_1,

    /* numero_carte_identite */
    4384,

    /* nom */
    "Arnaud",

    /* animal */
    (Animal_Domestique*)&chat_1
};
/******************************************************************************/




/******************************************************************************/
/* Chat 1 */
Chat_Attr attr_chat_1 = {

    /* attributs herites de Animal_Domestique */
    {
        /* age */
        8
    },

    /* nb_vies_restantes */
    7

};

const Chat chat_1 = {

    /* heritage de Animal_Domestique */
    {
        /* attributs variables (ref) */
        (Animal_Domestique_Attr*) &attr_chat_1,

        /* table des methodes (ref) */
        &methodes_chat,

        /* nom */
        "Grigri",

        /* immatriculation */
        666,

        /* proprio */
        &proprio_1
    },

    /* race */
    RAGDOLL
};
/******************************************************************************/



/******************************************************************************/
/* Chien_Berger 1 */

Chien_Berger_Attr attr_cb_1 = {

    /* heritage des attributs de Chien */
    {
        /* heritage des attributs de Animal_Domestique */
        {
            /* age */
            4
        },

        /* est_empailler */
        0
    },

    /* nb_moutons */
    13
};


const Chien_Berger cb_1 = {

    /* heritage de chien */
    {
        /* heritage de Animal_Domestique */
        {
            /* attributs variables (ref) */
            (Animal_Domestique_Attr*) &attr_cb_1,

            /* table des methodes (ref) */
            (Animal_Domestique_Meth*) &methodes_chien_berger,

            /* nom */
            "Medor",

            /* immatriculation */
            245,

            /* proprio */
            NULL
        },

        /* t_race_chien */
        EPAGNEUL
    }

};
/******************************************************************************/



int main ( int argc, char *argv[] )
{
    int i;
    Animal_Domestique* liste_animaux[2];


    liste_animaux[0] = (Animal_Domestique*)&chat_1 ;
    liste_animaux[1] = (Animal_Domestique*)&cb_1;




    Afficher_Proprietaire( &proprio_1 );
    Modifier_Age( &proprio_1, 33 );
    Afficher_Proprietaire( &proprio_1 );

    Afficher_Animal_Domestique( (Animal_Domestique*)&chat_1 );
    Enlever_Vie( &chat_1 );
    Afficher_Animal_Domestique( (Animal_Domestique*)&chat_1 );

    Modifier_Age_Animal( (Animal_Domestique*)&chat_1, 15 );
    Afficher_Animal_Domestique( (Animal_Domestique*)&chat_1 );

    Nourrir( (Animal_Domestique*)&chat_1 );

    Afficher_Animal_Domestique( (Animal_Domestique*)&cb_1 );
    Empailler_Chien( (Chien*)&cb_1 );
    Aboyer( (Chien*)&cb_1 );
    Afficher_Animal_Domestique( (Animal_Domestique*)&cb_1 );
    Rassembler_Troupeau( &cb_1 );


    for( i = 0 ; i<=1 ; i++ )
    {
        Afficher_Animal_Domestique( liste_animaux[i] );
    }

    return EXIT_SUCCESS;
}
