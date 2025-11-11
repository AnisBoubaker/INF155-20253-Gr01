#include <stdio.h>
#include <stdlib.h>


void cacher_caracteres(char phrase[], int nb_phrase, const char a_cacher[], int nb_cacher);
int est_dans_tableau(char caractere, char tab[], int taille);


int main() {
    char phrase[] = { 'B','o','n','j','o','u','r',' ','t','o','u','t',' ','l','e',' ',
                      'm','o','n','d','e' };
    char cacher[] = {'o', 'j', 'l', 'n'};

    for(int i=0; i<21; i++)
    {
        printf("%c", phrase[i]);
    }
    printf("\n");

    cacher_caracteres(phrase, 21, cacher, 4);

    for(int i=0; i<21; i++)
    {
        printf("%c", phrase[i]);
    }
    printf("\n");

    return 0;
}

int est_dans_tableau(char caractere, char tab[], int taille)
{
    for(int i=0; i<taille; i++)
    {
        if(tab[i]==caractere)
        {
            return 1;
        }
    }
    return 0;
}

void cacher_caracteres(char phrase[], int nb_phrase, const char a_cacher[], int nb_cacher)
{
    for(int i=0; i<nb_phrase; i++)
    {
        if(  est_dans_tableau(phrase[i], a_cacher, nb_cacher   ) )
        {
            phrase[i] = '*';
        }
    }
}
