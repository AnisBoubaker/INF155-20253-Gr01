#include <stdio.h>
#include <stdlib.h>

int main() {
    int* entier_dynamique=NULL;
    double* reel_dynamique=NULL;

    entier_dynamique = (int*)malloc(sizeof(int));
    if(entier_dynamique == NULL)
    {
        printf("Plus de mémoire....\n");
        exit(100);
    }
    *entier_dynamique = 10;
    printf("L'entier dynamique contient: %d\n", *entier_dynamique);


    //Avant de perdre l'adresse allouée par le malloc précédent,
    //il faut libérer l'espace à cette adresse.

    free(entier_dynamique);

    entier_dynamique = (int*)malloc(sizeof(int));
    if(entier_dynamique == NULL)
    {
        printf("Plus de mémoire....\n");
        exit(100);
    }
    *entier_dynamique = 25;
    printf("L'entier dynamique contient maintenant: %d\n", *entier_dynamique);

    reel_dynamique = (double*)realloc(entier_dynamique, sizeof(double));
    if(reel_dynamique == NULL)
    {
        printf("Plus de mémoire....\n");
        exit(100);
    }
    *reel_dynamique = 10.5;
    printf("Le reel dynamique contient: %.2lf\n", *reel_dynamique);

    free(reel_dynamique);
    reel_dynamique = (double*)malloc(10000000000000 * sizeof(double ));
    if(reel_dynamique == NULL)
    {
        printf("Plus de mémoire....\n");
        exit(100);
    }


    return 0;
}
