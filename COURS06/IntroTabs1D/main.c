#include <stdio.h>

int main(void) {

    int mon_tab[10]={12,45,67,10, 18, 25, 14, 18, 95, 101};


    printf("La case a l'indice 3 contient: %d\n", mon_tab[3]);

    mon_tab[3] = 56;

    printf("La case a l'indice 3 contient: %d\n", mon_tab[3]);

    //Afficher le contenu du tableau:
    //Pas possible: un tableau c'est un pointeur...
    //printf("Contenu de mon tableau: %p\n", mon_tab);
    for(int i=0; i<10; i++)
    {
        printf("%d , ", mon_tab[i]);
    }


    // CALCULEZ LA MOYENNE D'UN TABLEAU CONTENANT 10 VALEURS
    double moyenne;
    int somme = 0;

    for(int i=0; i<10; i++)
    {
        somme += mon_tab[i];
    }
    moyenne = somme / 10.0;

    printf("\nLa moyenne des valeurs dans le tableau est: %lf\n", moyenne);



    return 0;
}
