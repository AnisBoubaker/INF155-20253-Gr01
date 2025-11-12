#include <stdio.h>
#include <string.h>

#define MAX_CHAINE 100

//struct etudiant
//{
//    char nom[MAX_CHAINE];
//    char prenom[MAX_CHAINE];
//    char code_perm[MAX_CHAINE];
//    double tp1;
//    double tp2;
//    double intra;
//    double final;
//};
//
//typedef struct etudiant t_etudiant; //Le t_ pas convention


//typedef struct etudiant
//{
//    char nom[MAX_CHAINE];
//    char prenom[MAX_CHAINE];
//    char code_perm[MAX_CHAINE];
//    double tp1;
//    double tp2;
//    double intra;
//    double final;
//} t_etudiant;

typedef struct etudiant
{
    char nom[MAX_CHAINE];
    char prenom[MAX_CHAINE];
    char code_perm[MAX_CHAINE];
    double tp1;
    double tp2;
    double intra;
    double final;
} t_etudiant;




//On crée un nouvel alias pour le type unsigned int
typedef unsigned int int_pos;

int main() {
    t_etudiant et1;
    struct etudiant et2;


    unsigned int a;
    int_pos b;

    //struct etudiant etudiant1;
    t_etudiant etudiant1;

    etudiant1.tp1 = 80;
    etudiant1.tp2 = 85;
    etudiant1.intra = 75;
    etudiant1.final = 80;

    strcpy(etudiant1.nom,  "Valjean");
    strcpy(etudiant1.prenom, "Jean");
    strcpy(etudiant1.code_perm, "VALJ56565643");

    printf("Informations de l'etudiant-e:\n");
    printf("Nom: %s\n", etudiant1.nom);
    printf("Prenom: %s\n", etudiant1.prenom);
    printf("Code permanent: %s\n", etudiant1.code_perm);
    printf("TP1: %.2lf\n", etudiant1.tp1);
    printf("TP2: %.2lf\n", etudiant1.tp2);
    printf("Intra: %.2lf\n", etudiant1.intra);
    printf("Final: %.2lf\n", etudiant1.final);


    return 0;
}
