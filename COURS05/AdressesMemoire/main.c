#include <stdio.h>

int main() {

    int une_var_entiere = 10;
    int une_var_entiere2 = 10;

    int* mon_pointeur;

    printf("La variable une_var_entiere se trouve a : %p\n", &une_var_entiere);
    printf("La variable une_var_entiere2 se trouve a: %p\n", &une_var_entiere2);

    mon_pointeur = &une_var_entiere2;

    printf("Mon pointeur contient: %p\n", mon_pointeur);

    printf("Mon &pointeur contient: %p\n", &mon_pointeur);

    printf("La taille de la variable mon_pointeur: %d\n", sizeof(mon_pointeur));

    return 0;
}
