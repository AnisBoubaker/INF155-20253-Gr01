#include <stdio.h>

#define MAX_ETUDIANTS 60

double moyenne(double tab[], int taille);

int main() {
    double notes[MAX_ETUDIANTS];

    //Demander à l'usager de saisir toutes les notes du tableau
    //Et de saisir -1 pour signifier qu'il n'en a plus
    int compteur_notes = 0;
    do{
        printf("Saisir une note: ");
        scanf("%lf", &notes[compteur_notes]);
        compteur_notes++;
    } while (compteur_notes<MAX_ETUDIANTS && notes[compteur_notes-1]!=-1);
    compteur_notes --;

    printf("Valeur de compteur notes: %d\n", compteur_notes);

    for(int i=0; i<compteur_notes; i++)
    {
        printf("Note numero %d: %lf\n", i, notes[i]);
    }

    printf("La moyenne: %lf\n", moyenne(notes, compteur_notes));

    return 0;
}

double moyenne(double tab[], int taille){
    double somme = 0;
    for(int i=0 ;i < taille; i++ ){
        somme+= tab[i];
    }
    return somme / taille;
}
