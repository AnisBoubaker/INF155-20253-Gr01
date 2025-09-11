#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y;
    double z, w;
    double resultat;
    int reste;

    int nombre1, nombre2;

    x = 10;
    y = 3;

    resultat = (x*1.0) / y;
    reste = x % y;


    printf("Le resultat: %lf\n", resultat);
    printf("Le reste est: %d\n", reste);

//    printf("Saisir un premier nombre: ");
//    scanf("%d", &nombre1);
//
//    printf("Saisir un 2eme nombre: ");
//    scanf("%d", &nombre2);
//
//    printf("%d est divisible par %d si cette valeur %d est nulle.\n",
//           nombre1, nombre2, nombre1%nombre2);

    x = 11;
    printf("Le resultat de x++/3: %d\n", x++/3);
    printf("La valeur de x est: %d\n", x);
    x = 11;
    printf("Le resultat de ++x/3: %d\n", ++x/3);
    printf("La valeur de x est: %d\n", x);

    x= 5;
    y = 5;

    int k;
    //k = x==y;
    k = x != y;

    printf("La valeur de z: %d\n", k);


    return EXIT_SUCCESS;

    return 0;
}
