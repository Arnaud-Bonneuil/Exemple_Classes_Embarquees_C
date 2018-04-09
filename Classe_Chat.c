/******************************************************************************\
Classe Chat
herite de Animal_Domestique
\******************************************************************************/

#include "Classe_Chat.h"

#include <stdio.h> /* printf */

/******************************************************************************/
/* Implementation des methodes propres */
/******************************************************************************/
void Enlever_Vie( const Chat* this )
{
    Chat_Attr* attr = (Chat_Attr*)(this->super.attributs);
    if( attr->nb_vies_restantes > 0 )
    {
        attr->nb_vies_restantes = attr->nb_vies_restantes - 1;
    }
}
/******************************************************************************/


/******************************************************************************/
/* Implementation des methode heritees */
/******************************************************************************/
static void Nourrir_Chat( const Chat* this );
static void Afficher_Chat( const Chat* this );
/******************************************************************************/
static void Nourrir_Chat( const Chat* this )
{
    printf( "le chat est nourri\n" );
}
/******************************************************************************/
static void Afficher_Chat( const Chat* this )
{
    Chat_Attr* attr = (Chat_Attr*)(this->super.attributs);
    printf( "Chat: \n" );
    printf( "    nom : %s\n", Lire_Nom( (Animal_Domestique*)this ) );
    printf( "    age : %d\n", Lire_Age( (Animal_Domestique*)this ) );
    printf( "    cid : %d\n", Lire_Immatriculation((Animal_Domestique*)this ) );
    printf( "    race : ");
    switch( this->race )
    {
        case SIAMOIS :
            printf( "SIAMOIS" );
            break;
         case PERSAN :
            printf( "PERSAN" );
            break;
        case RAGDOLL :
            printf( "RAGDOLL" );
            break;
        default :
            printf( "inconnue" );
            break;
    }
    printf( "\n" );
    printf( "    vies : %d\n", attr->nb_vies_restantes );
    printf( "\n" );
}
/******************************************************************************/
Animal_Domestique_Meth methodes_chat = {
    /* nourrir */
    ( void (*) (const Animal_Domestique*) )Nourrir_Chat,
    /* afficher */
    ( void (*) (const Animal_Domestique*) )Afficher_Chat
};
/******************************************************************************/
