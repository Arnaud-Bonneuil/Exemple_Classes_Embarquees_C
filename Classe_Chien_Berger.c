/******************************************************************************\
Classe Chien_Berger
herite de Chien
\******************************************************************************/

#include "Classe_Chien_Berger.h"

#include <stdio.h> /* printf */

/******************************************************************************/
/* Implementation des methodes propres */
/******************************************************************************/
void Rassembler_Troupeau( const Chien_Berger* this )
{
    printf( "le chien rassemble le troupeau\n" );
}
/******************************************************************************/


/******************************************************************************/
/* Implementation des methode heritees */
/******************************************************************************/
static void Nourrir_Chien_Berger( const Chien_Berger* this );
static void Afficher_Chien_Berger( const Chien_Berger* this );
static void Aboyer_Chien_Berger( const Chien_Berger* this );
/******************************************************************************/
static void Nourrir_Chien_Berger( const Chien_Berger* this )
{
    printf( "le chien de berger est nourri\n" );
}
/******************************************************************************/
static void Afficher_Chien_Berger( const Chien_Berger* this )
{



    Chien_Berger_Attr* attr = (Chien_Berger_Attr*)(this->super.super.attributs);


    printf( "Chien de berger: \n" );
    printf( "    nom : %s\n", Lire_Nom( (Animal_Domestique*)this ) );
    printf( "    age : %d\n", Lire_Age( (Animal_Domestique*)this ) );
    printf( "    cid : %d\n", Lire_Immatriculation((Animal_Domestique*)this ) );
    printf( "    race : ");
    switch( Lire_Race_Chien( (Chien*)this ) )
    {
            case COCKER :
            printf( "COCKER" );
            break;
         case COLLET :
            printf( "COLLET" );
            break;
        case EPAGNEUL :
            printf( "EPAGNEUL" );
            break;
        default :
            printf( "inconnue" );
            break;
    }
    printf( "\n" );
    printf( "    empaille : %d\n", Est_Empailler( (Chien*)this ) );
    printf( "    nb mouton : %d\n", attr->nb_moutons );

    printf( "\n" );
}
/******************************************************************************/
static void Aboyer_Chien_Berger( const Chien_Berger* this )
{
    printf( "le chien de berger aboie\n" );
}
/******************************************************************************/
Chien_Meth methodes_chien_berger = {

    /* methodes heritees de Animal_Domestique */
    {
        /* nourrir */
        ( void (*) (const Animal_Domestique*) )Nourrir_Chien_Berger,
        /* afficher */
        ( void (*) (const Animal_Domestique*) )Afficher_Chien_Berger
    },

    /* aboyer */
    ( void (*) ( const Chien* ) )Aboyer_Chien_Berger
};
/******************************************************************************/
