//
// Created by Margaux Leglise on 04/10/2021.
//

#ifndef TD5_MESFONCTIONS_H
#define TD5_MESFONCTIONS_H
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4
#define TAILLE_TAB_EXO_3 12

/*************
* EXERCICE 1 *
**************/

/* EXERCICE 1 : renvoie un rationnel à partir d'un numérateur et un dénominateur
 * Paramètres :
 * IN : 2 entiers (le numérateur et le dénominateur)
 * OUT : un rationnel
 */
void afficherRationnel ( NbrRationnel rationnel ) ;



/*************
* EXERCICE 2 *
**************/

/* EXERCICE 2 : demande à l'utilisateur un entier
 * Paramètres :
 * IN :
 * OUT : l'entier saisit
 */
int saisirEntier ( ) ;

/* EXERCICE 2 : permet d'inserer dans chaque case d'un tableau une valeur
 * Paramètres :
 * IN : taille logique du tableau
 * INOUT : un tableau
 * OUT :
 */
void insererEntier ( int tab[] , int tailleTab ) ;


/* EXERCICE 2 : permet de trouver le plurs grand entier dans un tableau
 * Paramètres :
 * IN : taille du tableau
 * INOUT : tableau
 * OUT : le plus grand entier du tableau
 */
int plusGrand ( int tab[] , int tailleTab ) ;




/*************
* EXERCICE 2 *
**************/

/* EXERCICE 3 : permet de remplir une matrice
 * Paramètres :
 * IN :
 * OUT :
 */
void saisirMatrice ( ) ;


/* EXERCICE 3 : permet de copier une matrice dans un tableau 1D
 * Paramètres :
 * IN : une matrice
 * OUT : un tableau 1D avec les valeurs de la matrice
 */
int copie1D ( int matrice[NB_LIGNES_MAX][NB_COLONNES_MAX] , int tab1D [TAILLE_TAB_EXO_3] ) ;


/* EXERCICE 3 : permet d'afficher un tableau
 * Paramètres :
 * IN :
 * INOUT : un tableau
 * OUT : les valeurs d'un tableau
 */
int afficherTab ( int tab[TAILLE_TAB_EXO_3] ) ;

#endif //TD5_MESFONCTIONS_H
