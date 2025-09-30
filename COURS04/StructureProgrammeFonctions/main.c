#include <stdio.h>

//Déclarations de constantes de pré-compilation
#define POND_TP1 0.15
#define POND_TP2 0.15
#define POND_QUIZ 0.15
#define POND_INTRA 0.15
#define POND_FINAL 0.4

/**** DÉCLARATIONS DES FONCTIONS *******/
/*
 * Calcule la moyenne finale d'un-e étudiant-e en utilisant les pondérations
 * définies par les constantes POND_XXXX
 * ENTREE:
 *  - Notes obtenues par l'étudiant (réels)
 * SORTIE:
 *  - moyenne calculée si toutes les notes sont valides, -1 sinon
 */
double moyenne_finale(double tp1, double tp2, double quiz, double intra, double final);


int main(void) {
    double moyenne;

    moyenne = moyenne_finale(80, -10, 80, 80, 80);

    if(moyenne != -1) {
        printf("La moyenne: %.2lf\n", moyenne);
    } else {
        printf("Notes erronees.\n");
    }

    return 0;
}



double moyenne_finale(double tp1, double tp2, double quiz, double intra, double final)
{
    double moyenne = 0;
    // Déclaration d'une variable constante
    //const double pond_tp1 = 0.15;

    if(tp1<0 || tp1>100 || tp2<0 || tp2>100 || quiz<0 || quiz>100 ||
       intra<0 || intra>100 || final<0 || final>100)
    {
        return -1;
    }

    moyenne += tp1*POND_TP1;
    moyenne += tp2*POND_TP2;
    moyenne += quiz*POND_QUIZ;
    moyenne += intra*POND_INTRA;
    moyenne += final*POND_FINAL;


    return moyenne;
}
