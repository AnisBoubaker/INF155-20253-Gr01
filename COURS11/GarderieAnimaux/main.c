#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod_personne.h"


typedef struct date{
    int jour;
    int mois;
    int annee;
} t_date;

typedef struct animal{
    char nom[100];
    char espece[100];
    char race[100];
    t_date date_naiss;
    t_personne* proprietaire;
} t_animal;

int main() {

    t_personne p1;

    t_personne* p2;

    p2 = init_personne("Belanger", "Romy", "514-345-7867");

    afficher_personne(p2);

    free(p2->nom);
    free(p2->prenom);
    free(p2);

    return 0;
}
