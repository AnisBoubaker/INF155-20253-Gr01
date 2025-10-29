#include <stdio.h>

void afficher_tableau(int tab[], int taille);
void tri_insertion(int tab[], int taille);


int main() {
    int mon_tableau[7] = {44, 10, 20, 55, 10, 24, 35};

    afficher_tableau(mon_tableau, 7);
    tri_insertion(mon_tableau, 7);
    afficher_tableau(mon_tableau, 7);

    return 0;
}


void afficher_tableau(int tab[], int taille)
{
    for(int i=0; i<taille; i++)
    {
        printf("%d, ", tab[i]);
    }
    printf("\n");
}

void tri_insertion(int tab[], int taille)
{
    int copie;
    int j;
    for(int i=1; i<taille; i++)
    {
        copie = tab[i];
        j = i;
        while ( j>0 && tab[j-1] < copie)
        {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = copie;
    }
}
