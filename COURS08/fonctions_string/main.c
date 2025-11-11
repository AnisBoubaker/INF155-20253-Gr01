#include <stdio.h>
#include <string.h>

#define MAX_CHAINE 100

int main() {
    char prenom[MAX_CHAINE] = "Jean Michel";
    char copie_prenom[MAX_CHAINE];

    strcpy(copie_prenom, prenom);

    printf("La copie contient: %s\n", copie_prenom);

    //La seule façon d'affecter une valeur à une chaine de caractères en C
    strcpy(prenom, "Marie");
    //prenom = "Marie"; //INTERDIT

    strncpy(copie_prenom, prenom,MAX_CHAINE-1); //-1 pour tenir compte du \0

    printf("Le prenom (apres strncpy): %s\n", copie_prenom);

    char nom[MAX_CHAINE] = "Lafortune";
    char nom_complet[MAX_CHAINE];

    strncpy(nom_complet, prenom, MAX_CHAINE-1);
    strncat(nom_complet, " ", MAX_CHAINE-1);
    strncat(nom_complet, nom, MAX_CHAINE-1);
    printf("Nom complet: %s\n", nom_complet);


    char presentation[MAX_CHAINE];
    int age = 22;

    sprintf(presentation, "Bonjour, je m'appelle %s %s et j'ai %d ans", prenom, nom, age);
    printf("%s\n", presentation);


    char ch1[MAX_CHAINE];
    char ch2[MAX_CHAINE];

    //Lecture de ch1 et ch2
    printf("Saisir la premiere chaine: ");
    fgets(ch1, MAX_CHAINE, stdin);
    ch1[strlen(ch1)-1] = '\0';
    printf("Saisir la deuxieme chaine: ");
    fgets(ch2, MAX_CHAINE, stdin);
    ch2[strlen(ch2)-1] = '\0';

    //Comparaison des deux chaines
    int comparaison = strcmp(ch1, ch2);
    if(comparaison == 0 ) {
        printf("Les deux chaines sont identiques\n");
    } else if( comparaison < 0) {
        printf("La première chaine est plus petite\n");
    } else {
        printf("La premiere chaine est plus grande\n");
    }




    return 0;
}
