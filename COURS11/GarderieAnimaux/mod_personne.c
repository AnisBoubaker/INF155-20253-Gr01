//
// Created by Anis Boubaker on 2025-11-26.
//

#include "mod_personne.h"


/*
 * Crée une personne en allouant tout l'espace mémoire nécessaire et
 * en définissant les valeurs initiales reçues en paramètre./
 */
t_personne* init_personne(char nom[], char prenom[], char tel[])
{
    t_personne* p=NULL;

    p = (t_personne*)malloc(sizeof(t_personne));
    if(p==NULL)
    {
        return NULL;
    }

    p->nom = (char*)malloc(sizeof(char)*(strlen(nom)+1));
    if(p->nom == NULL)
    {
        free(p);
        return NULL;
    }
    strcpy(p->nom, nom);

    p->prenom = (char*)malloc(sizeof(char)*(strlen(prenom)+1));
    if(p->prenom == NULL)
    {
        free(p->nom);
        free(p);
        return NULL;
    }
    strcpy(p->prenom, prenom);
    strcpy(p->telephone, tel);

    return p;
}

void afficher_personne(const t_personne* p)
{
    printf("%s %s (%s)", p->prenom, p->nom, p->telephone);
}

void free_personne(t_personne* p)
{
    free(p->nom);
    free(p->prenom);
    free(p);
}












