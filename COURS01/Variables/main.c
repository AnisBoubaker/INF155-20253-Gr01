#include <stdio.h>
#include <stdlib.h>

int main() {

    int ma_variable; //Création de la varibale ma_variable sans initialisation
    //printf("La variable contient: %d\n", ma_variable);
    //La valeur affichée est indéfinie.

    //Stockage des caractères
    char un_caractere = 'A';
    int un_entier = 'Z' + 'b'; //90+98

    printf("Le caractere contient: %d\n", un_caractere);
    printf("La variable un_entier contient: %d\n", un_entier);


    /* Conversions de types */
    short variable_short;
    int variable_int;

    variable_int = 100000;
    variable_short = (short)variable_int;

    printf("Le contenue variable_short: %d", variable_short);



    return EXIT_SUCCESS;
}
