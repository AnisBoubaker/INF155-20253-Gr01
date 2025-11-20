#include <stdio.h>
#include <stdlib.h>

int** creer_tab2d_entiers(int nb_lignes, int nb_colonnes);

int main() {
    int nb_lignes =3, nb_colonnes = 4;
//    int** tab2d = NULL;
//
//    tab2d = (int**)malloc(nb_lignes * sizeof(int*));
//    if(tab2d != NULL)
//    {
//        for(int i=0; i<nb_lignes; i++)
//        {
//            tab2d[i] = (int*)malloc(nb_colonnes * sizeof(int));
//            if(tab2d[i]==NULL)
//            {
//                for(int j=0; j<i; j++)
//                {
//                    free(tab2d[j]);
//                }
//                free(tab2d);
//                break;
//            }
//        }
//    } else {
//        printf("Erreur lors de l'allocation du tableau à 2 dimensions.\n");
//    }

    int** tab2d;

    tab2d = creer_tab2d_entiers(nb_lignes, nb_colonnes);
    if(tab2d==NULL)
    {
        printf("Erreur d'allocation du tableau 2D\n");
        exit(100);
    }

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            tab2d[i][j] = i*j;
        }
    }

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%d\t", tab2d[i][j]);
        }
        printf("\n");
    }


    return 0;
}


int** creer_tab2d_entiers(int nb_lignes, int nb_colonnes)
{
    int** tab2d = NULL;

    tab2d = (int**)malloc(nb_lignes * sizeof(int*));
    if(tab2d != NULL)
    {
        for(int i=0; i<nb_lignes; i++)
        {
            tab2d[i] = (int*)malloc(nb_colonnes * sizeof(int));
            if(tab2d[i]==NULL)
            {
                for(int j=0; j<i; j++)
                {
                    free(tab2d[j]);
                }
                free(tab2d);
                return NULL;
            }
        }
    } else {
        return NULL;
    }

    return tab2d;
}