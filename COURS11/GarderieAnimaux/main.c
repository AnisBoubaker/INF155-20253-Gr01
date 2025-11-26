#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod_personne.h"
#include "mod_animal.h"



int main() {
    t_personne* romy=NULL;
    t_personne* jon=NULL;
    t_animal* a1=NULL;
    t_animal* a2=NULL;
    t_animal* a3=NULL;

    romy = init_personne("Belanger", "Romy", "514-345-7867");
    jon = init_personne("Snow", "Jon", "514-897-9087");

    a1 = init_animal("Choupi", "Chien", "Golden", 2021, 01, 20, romy);
    a2 = init_animal("Ghost", "Loup", "Warewolf", 1980, 10, 13, jon);
    a3 = init_animal("Suni", "Chat", "Persan", 2022, 03,10, romy);
    afficher_animal(a1);
    printf("\n");
    afficher_animal(a2);
    printf("\n");
    afficher_animal(a3);

    return 0;
}
