#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAINE 100

typedef struct etudiant{
    char nom[MAX_CHAINE];
    char prenom[MAX_CHAINE];
    char cperm[MAX_CHAINE];
    double note_finale;
} t_etudiant;


int main() {
    t_etudiant* mon_etudiant = NULL;

    mon_etudiant = (t_etudiant*)malloc(sizeof(t_etudiant));
    if(mon_etudiant== NULL)
    {
        exit(100);
    }

    mon_etudiant->note_finale = 100;
    strcpy(mon_etudiant->nom, "Valjean");
    strcpy(mon_etudiant->prenom, "Jean");
    strcpy(mon_etudiant->cperm, "VALJ87876765");

    printf("L'etudiant %s %s (%s) as obtenu la note de %.2lf\n",
           mon_etudiant->prenom,
           mon_etudiant->nom,
           mon_etudiant->cperm,
           mon_etudiant->note_finale);

    return 0;
}
