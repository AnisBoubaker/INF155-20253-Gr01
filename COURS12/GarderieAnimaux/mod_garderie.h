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


#endif //GARDERIEANIMAUX_MOD_GARDERIE_H
