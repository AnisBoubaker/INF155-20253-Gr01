//
// Created by Anis Boubaker on 2025-11-26.
//

#include "mod_animal.h"

t_animal* init_animal( const char* nom,
                       const char* espece,
                       const char* race,
                       int annee_naiss, int mois_naiss, int jour_naiss,
                       const t_personne* proprietaire)
{
    t_animal* a;

    if(proprietaire == NULL)
    {
        return NULL;
    }

    a = (t_animal*)malloc(sizeof(t_animal));
    if(a == NULL)
    {
        return NULL;
    }

    strcpy(a->nom , nom);
    strcpy(a->espece, espece);
    strcpy(a->race, race);

    a->date_naiss.jour = jour_naiss;
    a->date_naiss.mois = mois_naiss;
    a->date_naiss.annee = annee_naiss;

    a->proprietaire = proprietaire;

    return a;
}

/*
 * Libere l'animal mais ne libère pas le proprietaire
 * car on assume qu'un proprietaire peut avoir plusieurs animaux.
 */
void free_animal(t_animal* a)
{
    //Il faut utiliser la fonction destrice de t_personne
    //free(a->proprietaire);
    //free_personne(a->proprietaire);
    free(a);
}

void afficher_animal(const t_animal* a)
{
    printf("Nom: %s, Espèce: %s, Race: %s\n",
           a->nom, a->espece, a->race);
    printf("Date de naissance: %d-%d-%d\n",
           a->date_naiss.jour, a->date_naiss.mois, a->date_naiss.annee);
    printf("Proprietaire: ");
    afficher_personne(a->proprietaire);
}