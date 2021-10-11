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


void afficherRationnel ( NbrRationnel rationnel )
{
    printf ( "%f\n" , (float) rationnel.numerateur / (float) rationnel.denominateur ) ;
    return  ;
}



/*************
* EXERCICE 2 *
**************/

int saisirEntier ( )
{
    int entier = 0 ;
    scanf ( "%d" , &entier ) ;
    return entier ;
}

void insererEntier ( int tab[] , int tailleTab )
{
    int i = 0 ;
    for ( i = 0 ; i < tailleTab ; i++ )
    {
        printf ( "case %d :\n" , i + 1 ) ;
        tab [i] = saisirEntier() ;
    }
    return ;
}

int plusGrand ( int tab[] , int tailleTab )
{
    int i = 0 , grand = tab [0] ;
    for ( i = 0 ; i < tailleTab ; i++ )
    {
        if ( grand < tab[i] )
        {
            grand = tab[i] ;
        }
    }
    printf ( "Le plus grand entier de votre tableau est : %d" , grand ) ;
    return 0 ;
}



/*************
* EXERCICE 3 *
**************/

void saisirMatrice ( )
{
    int i = 0 , j = 0 ;
    int matrice [NB_LIGNES_MAX] [NB_COLONNES_MAX] = { { 0 } } ;
    for ( i = 0 ; i < NB_LIGNES_MAX ; i++ )
    {
        for ( j = 0; j < NB_COLONNES_MAX ; j++ )
        {
            printf ( "Rentrer l'entier de la case %dx%d\n" , i + 1 , j + 1 ) ;
            matrice [i][j] = saisirEntier() ;
        }
    }
}

int copie1D ( int matrice[NB_LIGNES_MAX][NB_COLONNES_MAX] , int tab1D [TAILLE_TAB_EXO_3] )
{
    int i = 0 , j = 0 , k = 0 ;
    for ( i = 0 ; i < NB_LIGNES_MAX ; i++ )
    {
        for ( j = 0 ; j < NB_COLONNES_MAX ; j++ )
        {
            for ( k = 0 ; k < TAILLE_TAB_EXO_3 ; k++ )
            {
                tab1D [k] = matrice [i][j] ;
            }
        }
    }
    return 0 ;
}

int afficherTab ( int tab [TAILLE_TAB_EXO_3] )
{
    int i = 0 , a = 0 ;
    printf ( "Votre tableau 1D est :\n" ) ;
    for ( i = 0 ; i < TAILLE_TAB_EXO_3 ; i++ )
    {
        printf ( "%d\t" , tab [1] ) ;
    }
    return 0 ;
}










