//
// Created by Anis Boubaker on 2025-11-26.
//

#include "mod_garderie.h"

t_garderie* init_garderie(void)
{
    t_garderie* g;

    g = (t_garderie*)malloc(sizeof(t_garderie));
    if(g == NULL)
    {
        return NULL;
    }

    g->liste = (t_animal**)malloc(sizeof(t_animal*)*TAILLE_INCREMENT);
    if(g->liste == NULL)
    {
        free(g);
        return NULL;
    }
    g->nb_animaux = 0;
    g->taille_max = TAILLE_INCREMENT;

    return g;
}
