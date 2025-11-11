#include <stdio.h>
#include <string.h>

int main() {

    char chaine[] = {'B','o','n','j','o','u','r', '\0'};

    //Taille = 21 + 1 car il ne faut pas oublier le \0
    char chaine2[22] = "Bonjour tout le monde!";

    //chaine2 = "Salut tout le monde!"; //Pas possible car c'est un pointeur constant
    chaine[0] = 'S';
    chaine[1] = 'a';


    char* chaine3 = "Salut tout le monde!";

    //chaine3[1] = 'b'; //Interdit car on modifie une zone mémoire en lecture seule (code bloc)

    chaine3  = "Les chaines de caracteres c'est compliqué!";

    printf("La chaine contient: %s\n", chaine);

    printf("Chaine3 contient: %s\n", chaine3);


//    char chaine_lue[1000];
//    char chaine_lue2[1000];
//    printf("Saisir votre prénom: ");
//    scanf("%s", chaine_lue);
//    printf("Saisir votre nom: ");
//    scanf("%s", chaine_lue2);
//
//    printf("Votre prenom est: %s\n", chaine_lue);
//    printf("Votre nom est: %s\n", chaine_lue2);



    char chaine_lue3[1000];
    printf("Saisir votre prénom: ");

    fgets(chaine_lue3, 1000, stdin);
    chaine_lue3[strlen(chaine_lue3)-1] = '\0';

    printf("Votre prénom est: %s\n", chaine_lue3);


    printf("La taille de votre prenom est: %d\n", strlen(chaine_lue3));


    //printf("%s", "Allo tout le monde!");








    return 0;
}
