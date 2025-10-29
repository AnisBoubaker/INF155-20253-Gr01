#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLS 10

double moyenne(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes);
double ecart_type(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes);
int outliers(double donnees[][MAX_COLS], int nb_lignes, int nb_colonnes);

int main() {
    double data[10][MAX_COLS] = {
            {67, 89, 100, 25},
            {3, 78, 90, 102},
            {105, 1025, 12, 82}
    };

    printf("Moyenne: %.2lf\n", moyenne(data, 3, 4));
    printf("Ecart-type: %.2lf\n", ecart_type(data, 3, 4));
    printf("Nombre de valeurs aberrantes: %d\n", outliers(data, 3, 4));

    return 0;
}

double moyenne(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes)
{
    double somme = 0 ;

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            somme += tab[i][j];
            //tab[i][j] = 0;
        }
    }
    return somme / (nb_lignes*nb_colonnes);
}

double ecart_type(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes)
{
    double moy = moyenne(tab, nb_lignes, nb_colonnes);
    double variance = 0;

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            variance += pow(tab[i][j]-moy, 2);
        }
    }
    variance = variance / (nb_lignes*nb_colonnes);
    return sqrt(variance);
}

int outliers(double donnees[][MAX_COLS], int nb_lignes, int nb_colonnes)
{
    int compteur = 0;
    double et = ecart_type(donnees, nb_lignes, nb_colonnes);
    double moy = moyenne(donnees, nb_lignes, nb_colonnes);
    double min = moy - 3*et;
    double max = moy + 3*et;

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
           if(donnees[i][j]<min || donnees[i][j]>max){
               compteur++;
               donnees[i][j] = moy;
           }
        }
    }
    return compteur;
}