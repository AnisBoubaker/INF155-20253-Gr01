//
// Created by Anis Boubaker on 2025-11-26.
//

#ifndef GARDERIEANIMAUX_MOD_PERSONNE_H
#define GARDERIEANIMAUX_MOD_PERSONNE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct personne{
    char* nom;
    char* prenom;
    char telephone[20];
} t_personne;


/*
 * Crée une personne en allouant tout l'espace mémoire nécessaire et
 * en définissant les valeurs initiales reçues en paramètre./
 */
t_personne* init_personne(char nom[], char prenom[], char tel[]);

void afficher_personne(const t_personne* p);

#endif //GARDERIEANIMAUX_MOD_PERSONNE_H
