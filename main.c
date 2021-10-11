#include <stdio.h>
#include "mesStructures.h"
#include "exercices.h"
#include "mesFonctions.h"

#define TAILLE_PHYSIQUE 100
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4
#define TAILLE_TAB_EXO_3 12

int main()
{
    int exercice = 0 ;
    printf ( "Choissisez un exercice\n" ) ;
    scanf ( "%d" , &exercice ) ;
    switch ( exercice )
    {
        case 1 :
        {
            Exercice1 ( ) ;
            break ;
        }
        case 2 :
        {
            Exercice2 ( ) ;
            break ;
        }
        case 3 :
        {
            Exercice3 ( ) ;
            break ;
        }
        default :
        {
            printf ( "Le nombre saisit ne correspond à aucun exercice\n" ) ;
            break ;
        }
    }
    return 0;
}
