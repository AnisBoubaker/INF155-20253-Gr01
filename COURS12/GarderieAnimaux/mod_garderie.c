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


int garderie_ajouter_animal(t_garderie* g, const t_animal* a)
{
    if(g->nb_animaux == g->taille_max){ //Il faut agrandir
        t_animal** liste_tmp;

        liste_tmp = realloc(g->liste, (g->taille_max+TAILLE_INCREMENT)*sizeof(t_animal*));
        if(liste_tmp == NULL)
        {
            return 0;
        }
        g->liste = liste_tmp;
        g->taille_max += TAILLE_INCREMENT;
    }
    g->liste[ g->nb_animaux ] = a;
    g->nb_animaux++;
}