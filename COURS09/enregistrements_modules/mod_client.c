//
// Created by Anis Boubaker on 2025-11-12.
//

#include "mod_client.h"


void afficher_client(const t_client* c)
{
    printf("Informations du client: ");
    printf("Num: %d\n", c->num);
    printf("Nom: %s %s\n", c->prenom, c->nom);
    printf("Adresse: %d %s, %s, %s\n", c->adresse->num, c->adresse->rue,
           c->adresse->ville, c->adresse->code_postal);
}

void saisir_client(t_client* c)
{
    printf("Saisir les informations du client:\n");
    printf("Numero: ");
    scanf("%d", &(*c).num);
    getchar(); //Pour vider le retour à la ligne qui est resté dans le buffer du clavier
    printf("Nom: ");
    fgets((*c).nom, MAX_CHAR, stdin);
    (*c).nom[ strlen((*c).nom)-1 ] = '\0';
    printf("Prenom: ");
    //Notation alternative avec la fleche:
    fgets(c->prenom, MAX_CHAR, stdin);
    c->prenom[ strlen(c->prenom)-1 ] = '\0';
    printf("Saisir l'adresse: \n");
    printf("Num: ");
    scanf("%d", &c->adresse->num);
    getchar();
    printf("Rue: ");
    fgets(c->adresse->rue, MAX_CHAR, stdin);
    c->adresse->rue[ strlen(c->adresse->rue) -1 ] = '\0';
    printf("Ville: ");
    fgets(c->adresse->ville, MAX_CHAR, stdin);
    c->adresse->ville[ strlen(c->adresse->ville) -1 ] = '\0';
    printf("Code postal: ");
    fgets(c->adresse->code_postal, 10, stdin);
    c->adresse->code_postal[ strlen(c->adresse->code_postal) -1 ] = '\0';
}