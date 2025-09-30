#include <stdio.h>
#include <stdlib.h>
int main() {
    int max;
    int compteur;
    int somme=0;

    printf("Saisir la valeur maximale: ");
    scanf("%d", &max);

    for(compteur=0; compteur<=max; compteur++){
        somme += compteur;
    }

//    compteur = 0;
//    while(compteur<= max)
//    {
//        somme = somme + compteur;
//        compteur++;
//    }
    printf("La somme est: %d\n", somme);

    return EXIT_SUCCESS;
}
