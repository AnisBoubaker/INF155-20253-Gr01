#include <stdio.h>
#include <stdlib.h>

void afficher_damier(int t)
{
    for(int i=0; i< t; i++)
    {
        for(int j=0; j< t; j++)
        {
            if((i+j)%2 == 0){
                printf("#");
            }
            else {
                printf(".");
            }
        }
        printf("\n");
    }
}


int saisir_taille(void)
{
    int taille;
    do{
        printf("Veuillez saisir la taille: ");
        scanf("%d", &taille);
        if(taille <=0 ){
            printf("EREEUR: La taille doit etre >0\n");
        }
    } while(taille<=0);
    return taille;
}


int main() {
    int taille;

    taille = saisir_taille();
    afficher_damier(taille);

    return 0;
}
