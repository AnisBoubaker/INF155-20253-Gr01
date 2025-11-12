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

#include "mod_client.h"


int main() {
    t_client client1;
    t_adresse adr_client1;

    client1.adresse = &adr_client1;

    saisir_client(&client1);

    afficher_client(&client1);

    return 0;
}
