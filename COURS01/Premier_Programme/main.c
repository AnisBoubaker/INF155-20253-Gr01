/*
 * Programme qui calcule le salsire d'un employé
 * Date: 2025-09-03
 * Auteur: Anis Boubaker
 * Version: 1.0
 */

/* Inclusion de la libraire stdio.h
 * car l'instruction printf en fait partie */
#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    double taux_horaire;
    double nb_heures;
    double salaire_payable;

    printf("Saisir le taux horaire: ");
    scanf("%lf", &taux_horaire);

    printf("Saisir le nombre d'heures: ");
    scanf("%lf", &nb_heures);

    salaire_payable = taux_horaire * nb_heures;

    printf("Felicitations, vous avez gagne: %lf dollars!\n", salaire_payable);

    return EXIT_SUCCESS;
}