#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //char prenom[100];
    char buffer[100];

    char* prenom = NULL;
    char* nom = NULL;


    printf("Saisir le prenom: ");
    fgets(buffer, 100, stdin);
    buffer[strlen(buffer)-1] = '\0';
    //+1 car il faut tenir compte du \0
    prenom = (char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(prenom, buffer);

    printf("Saisir le nom: ");
    fgets(buffer, 100, stdin);
    buffer[strlen(buffer)-1] = '\0';
    nom = (char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nom, buffer);

    printf("Votre nom complet: %s %s\n", prenom, nom);

    return 0;
}
