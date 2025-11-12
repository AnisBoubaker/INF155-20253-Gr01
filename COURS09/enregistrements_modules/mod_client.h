//
// Created by Anis Boubaker on 2025-11-12.
//

#ifndef MOD_CLIENT__H
#define MOD_CLIENT__H

#include <stdio.h>
#include <string.h>


#define MAX_CHAR 100

typedef struct adresse{
    int num;
    char rue[MAX_CHAR];
    char ville[MAX_CHAR];
    char code_postal[10];
} t_adresse;

typedef struct client{
    int num;
    char nom[MAX_CHAR];
    char prenom[MAX_CHAR];
    t_adresse* adresse;
} t_client;

//Prototypes
void afficher_client(const t_client* c);
void saisir_client(t_client* c);


#endif //ENREGISTREMENTS_MODULES_MOD_CLIENT_H
