
#include "math2d.h"


// IMPORTANT
/*
 * On doit toujours passer la taille effective du tableau lorsqu'on
 * reçoit un tableau en paramètre
 */
double moyenne_2d(int tab[][TAILLEMAX_COLONNES], int nb_lignes, int nb_colonnes){
    double somme = 0;

    for(int i=0; i< nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            somme += tab[i][j];
        }
    }
    return somme / (nb_lignes * nb_colonnes);
}

int min(int tab2d[][TAILLEMAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    int min = tab2d[0][0];
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            if(tab2d[i][j]<min){
                min = tab2d[i][j];
            }
        }
    }
    return min;
}

int max(int tab2d[][TAILLEMAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    int max = tab2d[0][0];
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            if(tab2d[i][j]>max){
                max = tab2d[i][j];
            }
        }
    }
    return max;
}