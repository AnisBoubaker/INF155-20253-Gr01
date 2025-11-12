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
    t_adresse adresse;
} t_client;

int main() {
    t_client client1;

    t_client clients[1000];

    //Modifier le numero de l'adresse du client à la case 10:
    clients[10].adresse.num = 5000;


    // Définir le numéro de la rue de client1 à 10500
    //client1.adresse.num = 10500;

    printf("Saisir les informations du client:\n");
    printf("Numero: ");
    scanf("%d", &client1.num);
    getchar(); //Pour vider le retour à la ligne qui est resté dans le buffer du clavier
    printf("Nom: ");
    fgets(client1.nom, MAX_CHAR, stdin);
    client1.nom[ strlen(client1.nom)-1 ] = '\0';
    printf("Prenom: ");
    fgets(client1.prenom, MAX_CHAR, stdin);
    client1.prenom[ strlen(client1.prenom)-1 ] = '\0';
    printf("Saisir l'adresse: \n");
    printf("Num: ");
    scanf("%d", &client1.adresse.num);
    getchar();
    printf("Rue: ");
    fgets(client1.adresse.rue, MAX_CHAR, stdin);
    client1.adresse.rue[ strlen(client1.adresse.rue) -1 ] = '\0';
    printf("Ville: ");
    fgets(client1.adresse.ville, MAX_CHAR, stdin);
    client1.adresse.ville[ strlen(client1.adresse.ville) -1 ] = '\0';
    printf("Code postal: ");
    fgets(client1.adresse.code_postal, 10, stdin);
    client1.adresse.code_postal[ strlen(client1.adresse.code_postal) -1 ] = '\0';


    printf("Informations du client: ");
    printf("Num: %d\n", client1.num);
    printf("Nom: %s %s\n", client1.prenom, client1.nom);
    printf("Adresse: %d %s, %s, %s\n", client1.adresse.num, client1.adresse.rue,
           client1.adresse.ville, client1.adresse.code_postal);


    return 0;
}
