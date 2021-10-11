//
// Created by Margaux Leglise on 04/10/2021.
//

#ifndef TD5_MESSTRUCTURES_H
#define TD5_MESSTRUCTURES_H


/*************
* EXERCICE 1 *
**************/

typedef struct
{
    int numerateur , denominateur ;
}
NbrRationnel ;

/* EXERCICE 1 : renvoie un rationnel saisit par l'utilisateur
 * Paramètres :
 * IN :
 * OUT : le rationnel saisit
 */
NbrRationnel saisirRationnel ( ) ;


/* EXERCICE 1 : renvoie le produit de deux rationnels
 * Paramètres :
 * IN : 2 rationnels
 * OUT : le produit des 2 rationnels
 */
NbrRationnel multiplication ( NbrRationnel rationnel1 , NbrRationnel rationnel2 ) ;


/* EXERCICE 1 : renvoie la somme de deux rationnels
 * Paramètres :
 * IN : 2 rationnels
 * OUT : la somme des 2 rationnels
 */
NbrRationnel addition ( NbrRationnel rationnel1 , NbrRationnel rationnel2 ) ;

#endif //TD5_MESSTRUCTURES_H
