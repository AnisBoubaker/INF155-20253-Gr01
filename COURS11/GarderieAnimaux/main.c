#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personne{
    char* nom;
    char* prenom;
    char telephone[20];
} t_personne;

typedef struct date{
    int jour;
    int mois;
    int annee;
} t_date;

typedef struct animal{
    char nom[100];
    char espece[100];
    char race[100];
    t_date date_naiss;
    t_personne* proprietaire;
} t_animal;

int main() {

    t_animal choupi;

    /*
     * Question 0.4
     */
    strcpy(choupi.nom , "Choupi");
    strcpy(choupi.espece , "Chien");
    strcpy(choupi.race, "Golden Retriever");
    choupi.date_naiss.annee = 2021;
    choupi.date_naiss.mois = 1;
    choupi.date_naiss.jour = 20;

    choupi.proprietaire = (t_personne*)malloc(sizeof(t_personne));
    choupi.proprietaire->nom = (char*)malloc(sizeof(char)*(strlen("Romy")+1));
    strcpy(choupi.proprietaire->nom, "Romy");
    choupi.proprietaire->prenom = (char*)malloc(sizeof(char)*(strlen("Belanger")+1));
    strcpy(choupi.proprietaire->prenom, "Belanger");
    //On ne doit pas faire ceci, car le telephone est deja alloue de façon statique.
    //choupi.proprietaire.telephone = (char*)malloc(sizeof(char)*(strlen("514-345-8967")+1));
    strcpy(choupi.proprietaire->telephone, "514-345-8967");


    printf("Nom: %s, %s de race: %s,\nNé le: %d-%d-%d et apparient à %s %s (%s)",
           choupi.nom,
           choupi.espece,
           choupi.race,
           choupi.date_naiss.jour,
           choupi.date_naiss.mois,
           choupi.date_naiss.annee,
           choupi.proprietaire->prenom,
           choupi.proprietaire->nom,
           choupi.proprietaire->telephone
    );

    //On libere la memoire qui a été allouée dynamiquement
    free(choupi.proprietaire->nom);
    free(choupi.proprietaire->prenom);
    free(choupi.proprietaire);

    /*
     * Question 0.1 à 0.3
     */
//    strcpy(choupi.nom , "Choupi");
//    strcpy(choupi.espece , "Chien");
//    strcpy(choupi.race, "Golden Retriever");
//    choupi.date_naiss.annee = 2021;
//    choupi.date_naiss.mois = 1;
//    choupi.date_naiss.jour = 20;
//
//    choupi.proprietaire.nom = (char*)malloc(sizeof(char)*(strlen("Romy")+1));
//    strcpy(choupi.proprietaire.nom, "Romy");
//    choupi.proprietaire.prenom = (char*)malloc(sizeof(char)*(strlen("Belanger")+1));
//    strcpy(choupi.proprietaire.prenom, "Belanger");
//    //On ne doit pas faire ceci, car le telephone est deja alloue de façon statique.
//    //choupi.proprietaire.telephone = (char*)malloc(sizeof(char)*(strlen("514-345-8967")+1));
//    strcpy(choupi.proprietaire.telephone, "514-345-8967");
//
//
//    printf("Nom: %s, %s de race: %s,\nNé le: %d-%d-%d et apparient à %s %s (%s)",
//           choupi.nom,
//           choupi.espece,
//           choupi.race,
//           choupi.date_naiss.jour,
//           choupi.date_naiss.mois,
//           choupi.date_naiss.annee,
//           choupi.proprietaire.prenom,
//           choupi.proprietaire.nom,
//           choupi.proprietaire.telephone
//    );
//
//    //On libere la memoire qui a été allouée dynamiquement
//    free(choupi.proprietaire.nom);
//    free(choupi.proprietaire.prenom);


//    t_personne p1;
//    t_personne* p2;
//
//    p2 = &p1;
//
//    p1.nom = (char*)malloc(100*sizeof(char));
//    strcpy(p1.nom , "Jean");
//
//    printf("Le nom de p2 est: %s", p2->nom);

    return 0;
}
