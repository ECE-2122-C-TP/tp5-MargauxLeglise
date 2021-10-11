//
// Created by Margaux Leglise on 04/10/2021.
//

#include <stdio.h>
#include "mesStructures.h"
#include "exercices.h"
#include "mesFonctions.h"

#define TAILLE_PHYSIQUE 100
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4
#define TAILLE_TAB_EXO_3 12

/*************
* EXERCICE 1 *
**************/

NbrRationnel saisirRationnel ( )
{
    NbrRationnel rationnel ;
    printf ( "Numérateur de votre rationnel ? \n" ) ;
    scanf ( "%d" , &rationnel.numerateur ) ;
    printf ( "Dénominateur de votre rationnel ? \n" ) ;
    scanf ( "%d" , &rationnel.denominateur ) ;
    return rationnel ;
}


NbrRationnel multiplication ( NbrRationnel rationnel1 , NbrRationnel rationnel2 )
{
    NbrRationnel rationnelFinal = { rationnel1.numerateur * rationnel2.numerateur ,
                                    rationnel1.denominateur * rationnel2.denominateur } ;
    return rationnelFinal ;
}


NbrRationnel addition ( NbrRationnel rationnel1 , NbrRationnel rationnel2 )
{
    NbrRationnel rationnelFinal = { rationnel1.numerateur * rationnel2.denominateur +
                                    rationnel2.numerateur * rationnel1.denominateur ,
                                    rationnel1.denominateur * rationnel2.denominateur } ;
    return rationnelFinal ;
}

