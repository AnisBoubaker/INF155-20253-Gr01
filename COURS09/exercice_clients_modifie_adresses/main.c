/*
 * # Exercice 1
 * Écrire un programme qui déclare un enregistrement client comportant le numéro du
 * client, son nom et prénom, son adresse (numéro, rue, ville et code postal).
 * Votre programme doit demander la saisie des informations d'un client puis afficher
 * les informations.
 * Les chaines de caractères n'excèderont pas 100 caractères.
 */

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


int main() {
    t_client client1;
    //t_adresse adr_client1;

    //client1.adresse = &adr_client1;

    t_client clients[1000];

    //Modifier le numero de l'adresse du client à la case 10:
    printf("On change le numero de l'adresse à 5000:\n");
    clients[10].adresse->num = 5000;


    // Définir le numéro de la rue de client1 à 10500
    //client1.adresse.num = 10500;


    saisir_client(&client1);

    afficher_client(&client1);

    return 0;
}

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