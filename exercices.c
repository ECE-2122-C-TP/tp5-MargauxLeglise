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


void Exercice1 ( )
{

    NbrRationnel rationnel1 , rationnel2,  resultatMultiplication , resultatAddition ;
    printf ( "Votre premier rationnel:\n" ) ;
    rationnel1 = saisirRationnel() ;
    printf ( "Votre premier rationnel est donc : \t" ) ;
    afficherRationnel ( rationnel1 ) ;
    printf ( "Votre deuxième rationnel:\n" ) ;
    rationnel2 = saisirRationnel() ;
    printf ( "Votre deuxième rationnel est donc : \t" ) ;
    afficherRationnel ( rationnel2 ) ;
    printf ( "Le produit de vos 2 rationnels :\n") ;
    resultatMultiplication = multiplication ( rationnel1 , rationnel2 ) ;
    afficherRationnel ( resultatMultiplication ) ;
    printf ( "La somme de vos 2 rationnels :\n" ) ;
    resultatAddition = addition ( rationnel1 , rationnel2 ) ;
    afficherRationnel ( resultatAddition ) ;
    return ;
}

void Exercice2 ( )
{
    int tailleTab = 0 ;
    int tab [TAILLE_PHYSIQUE] = { 0 } ;
    printf ( "De quelle taille est votre tableau ? \n") ;
    tailleTab = saisirEntier() ;
    insererEntier ( tab , tailleTab ) ;
    plusGrand ( tab , tailleTab ) ;
    return ;
}

void Exercice3 ( )
{
    int tab [TAILLE_TAB_EXO_3] = { 0 } ;
    int matrice [NB_LIGNES_MAX] [NB_COLONNES_MAX] = { { 0 } } ;
    int tabResultat [TAILLE_TAB_EXO_3] = { 0 } ;
    printf ( "Rentrez les valeurs de votre matrice : \n" ) ;
    saisirMatrice() ;
    copie1D ( matrice , tab ) ;
    afficherTab ( tab ) ;   //Je n'arrive pas à faire afficher le tableau en 1D
    return ;
}














