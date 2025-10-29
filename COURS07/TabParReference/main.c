#include <stdio.h>

int bizarre(int tab[], int taille)
{
    int somme = 0;
    for(int i=0; i<taille; i++)
    {
        tab[i] = tab[i]*2;
        somme += tab[i];
    }
    return somme;
}

int main() {
    int un_tab[5] = {10, 20 , 30 , 40, 50};

    bizarre(un_tab, 5);

    for(int i=0; i<5; i++)
    {
        printf("%d, ", un_tab[i]);
    }
    printf("\n");
    return 0;
}
