#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nb_etudiants, taille_groupes;
    int fact_nb_etudiants, fact_taille, fact_difference;

    printf("Combien d'etudiant-es: ");
    scanf("%d", &nb_etudiants);

    printf("Taille des groupes: ");
    scanf("%d", &taille_groupes);

    fact_nb_etudiants = 1;
    for(int i=1; i<=nb_etudiants; i++)
    {
        fact_nb_etudiants *= i;
    }

    fact_taille = 1;
    for(int i=1; i<=taille_groupes; i++)
    {
        fact_taille *=i;
    }

    fact_difference = 1;
    for(int i=1; i<=nb_etudiants-taille_groupes; i++)
    {
        fact_difference *= i;
    }
    return EXIT_SUCCESS;
}
