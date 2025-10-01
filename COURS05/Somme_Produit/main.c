#include <stdio.h>

void somme_produit(int n, int* adr_sum, int* adr_prd);

int main() {
    int somme, produit;

    somme_produit(5, &somme, &produit);
    printf("La somme: %d, Le produit: %d\n", somme, produit);
    return 0;
}

void somme_produit(int n, int* adr_sum, int* adr_prd)
{
    int somme = 0;
    int produit = 1;
    for(int i=1; i<=n; i++)
    {
        somme += i;
        produit *= i;
    }
    *adr_sum = somme;
    *adr_prd = produit;
}
