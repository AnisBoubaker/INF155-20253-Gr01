#include <stdio.h>
#include <stdlib.h>

int main() {

    int* data=NULL;

    //On crée un tableau à une dimension dynamique de 100 entiers
    //data = (int*)malloc(100*sizeof(int));
    data = (int*)calloc(100, sizeof(int)); //Exactement la meme taille allouée + remplit l'espace mémoire de 0
    if(data == NULL)
    {
        exit(100);
    }
    *data = 120;
    *(data+1) = 56;

    printf("La premiere valeur: %d\n", *data);
    printf("La deuxieme valeur: %d\n", *(data+1));


    printf("La premiere case en notation tableau: %d\n", data[0]);

    for(int i=0; i<10; i++)
    {
        data[i] = i+5;
    }

    printf("Contenu du tableau: \n");
    for(int i =0; i<10; i++)
    {
        printf("%d, ", data[i]);
    }

    return 0;
}
