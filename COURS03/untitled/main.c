#include <stdio.h>

int factorielle(int val){
    int resultat = 1;
    for(int i=1; i<=val; i++)
    {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int taille_classe;
    int taille_groupes;
    int nb_combinaisons;

    printf("Taille de la classe: ");
    scanf("%d", &taille_classe);

    printf("Taille de groupes: ");
    scanf("%d", &taille_groupes);

    nb_combinaisons = factorielle(taille_classe) /
            (factorielle(taille_groupes)* factorielle(taille_classe-taille_groupes));

    printf("Le nombre de combinaisons: %d\n", nb_combinaisons);

    return 0;
}
