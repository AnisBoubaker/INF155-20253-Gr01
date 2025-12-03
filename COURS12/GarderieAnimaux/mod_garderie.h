//
// Created by Anis Boubaker on 2025-11-26.
//

#ifndef GARDERIEANIMAUX_MOD_GARDERIE_H
#define GARDERIEANIMAUX_MOD_GARDERIE_H

#include "mod_animal.h"

#define TAILLE_INCREMENT 10

typedef struct garderie{
    t_animal** liste; //Tab à 1 dimension de références vers des t_animal
    int nb_animaux; //Taille effective de la liste d'animaux
    int taille_max;
} t_garderie;

t_garderie* init_garderie(void);

//Ajoute un animal à la garderie en s'assurant d'augmenter la taille du tableau
//au besoin. Retourne vrai si l'animal a bien été ajouté, faux sinon.
int garderie_ajouter_animal(t_garderie* g, const t_animal* a);



#endif //GARDERIEANIMAUX_MOD_GARDERIE_H
