#include <stdio.h>
#include "math2d.h"


int main() {

    int tab2d[TAILLEMAX_LIGNES][TAILLEMAX_COLONNES] =
            { {10, 15, 3000, 25} ,  {2, 33, 44, 55}, {78, 88, 98, 108} };

    //Le reste des cases est initialisé à 0
    //int tab2d[3][4] = { {10} ,  {22, 33 } };

    int tableau_nul[10][5] = { {0} }; // = {0} est aussi permis

    for(int i=0; i<TAILLEMAX_LIGNES; i++) {
        for (int j = 0; j < TAILLEMAX_COLONNES; j++) {
            printf("%d ", tab2d[i][j]);
        }
        printf("\n");
    }

    int min, max2;

    min = tab2d[0][0];
    max2 = tab2d[0][0];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(tab2d[i][j] < min){
                min = tab2d[i][j];
            }
            if(tab2d[i][j] > max2){
                max2 = tab2d[i][j];
            }
        }
    }

    printf("Le minimum: %d, Le maximum: %d\n", min, max2);

    printf("Le max: %d\n", max(tab2d, 3, 4));

    return 0;
}

