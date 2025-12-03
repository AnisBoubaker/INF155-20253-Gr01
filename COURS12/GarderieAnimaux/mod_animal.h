//
// Created by Anis Boubaker on 2025-11-26.
//

#ifndef GARDERIEANIMAUX_MOD_ANIMAL_H
#define GARDERIEANIMAUX_MOD_ANIMAL_H

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

t_animal* init_animal( const char* nom,
                       const char* espece,
                       const char* race,
                       int annee_naiss, int mois_naiss, int jour_naiss,
                       const t_personne* proprietaire);


void free_animal(t_animal* a);

void afficher_animal(const t_animal* a);



#endif //GARDERIEANIMAUX_MOD_ANIMAL_H
