#include <stdio.h>

void afficher_tableau(int tab[], int taille);
void tri_insertion(int tab[], int taille);
void tri_selection(int tab[], int taille);
void tri_bulles(int tab[], int taille);


int main() {
    int mon_tableau[7] = {44, 10, 20, 55, 10, 24, 35};
    int mon_tableau2[7] = {44, 10, 20, 55, 10, 24, 35};
    int mon_tableau3[7] = {44, 10, 20, 55, 10, 24, 35};

    afficher_tableau(mon_tableau, 7);
    tri_insertion(mon_tableau, 7);
    afficher_tableau(mon_tableau, 7);

    tri_selection(mon_tableau2, 7);
    afficher_tableau(mon_tableau2, 7);

    tri_bulles(mon_tableau3, 7);
    afficher_tableau(mon_tableau3, 7);

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
        while ( j>0 && tab[j-1] > copie)
        {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = copie;
    }
}

void tri_selection(int tab[], int taille)
{
    int indice_min;
    int tmp;
    for(int i=0; i<taille; i++)
    {
        indice_min = i;
        for(int j=i+1; j<taille; j++)
        {
            if(tab[j]<tab[indice_min]){
                indice_min = j;
            }
        }
        if(indice_min != i )
        {
            tmp = tab[indice_min];
            tab[indice_min] = tab[i];
            tab[i] = tmp;
        }
    }
}

void tri_bulles(int tab[], int taille)
{
    int tmp;
    for(int i=taille-1; i>0; i--)
    {
        for(int j=0; j<=  i-1; j++)
        {
            if(tab[j]> tab[j+1])
            {
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
}