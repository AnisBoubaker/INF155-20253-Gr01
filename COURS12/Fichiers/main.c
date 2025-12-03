#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personne{
    char nom[250];
    char prenom[250];
    int age;
    char sexe;
} t_personne;


int main() {
    FILE *fichier = NULL;
    char lecture[1000];

    fichier = fopen("mon_fichier.txt", "r");
    if (fichier == NULL) {
        printf("Ouverture du fichier impossible.\n");
        exit(0);
    }

    while (fgets(lecture, 1000, fichier)){
        printf("%s", lecture);
    }

    fclose(fichier);


    //Lecture avec fscanf
    int ent1, ent2;
    double reel1;
    FILE* data = NULL;

    data = fopen("data.txt", "r");
    if(data == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier...\n");
        exit(0);
    }
    printf("\n");
    fscanf(data, "%d %d %lf", &ent1, &ent2, &reel1);

    printf("Premier entier: %d, 2e Entier: %d, Reel: %lf\n", ent1, ent2, reel1);

    //Écriture dans un fichier
    FILE* fichier_personne = NULL;
    t_personne une_personne;

    strcpy(une_personne.nom , "Valjean");
    strcpy(une_personne.prenom, "Jean");
    une_personne.age = 45;
    une_personne.sexe = 'M';

    fichier_personne = fopen("une_personne.txt", "w");
    if(fichier_personne == NULL)
    {
        printf("Erreur d'ouverture du fichier...\n");
        exit(0);
    }

    fprintf(fichier_personne, "%s\n%s\n%d\n%c\n",
            une_personne.nom,
            une_personne.prenom,
            une_personne.age,
            une_personne.sexe);

    fclose(fichier_personne);

    fichier_personne = fopen("une_personne.txt", "r");
    if(fichier_personne==NULL)
    {
        printf("Erreur d'ouverture du fichier...\n");
        exit(0);
    }

    t_personne copie_une_personne;
    fgets( copie_une_personne.nom , 250, fichier_personne);
    copie_une_personne.nom[ strlen(copie_une_personne.nom) -1] = '\0';
    fgets( copie_une_personne.prenom , 250, fichier_personne);
    copie_une_personne.prenom[ strlen(copie_une_personne.prenom) -1] = '\0';
    fscanf(fichier_personne, "%d", &copie_une_personne.age);
    fgetc(fichier_personne); //Juste pour ignore le retour à la ligne
    fscanf(fichier_personne, "%c", &copie_une_personne.sexe);

    printf("La copie de la personne lue depuis le fichier: \n");
    printf("Nom: %s, Prenom: %s, Age: %d, Sexe: %c\n",
           copie_une_personne.nom,
           copie_une_personne.prenom,
           copie_une_personne.age,
           copie_une_personne.sexe);

    return 0;
}
