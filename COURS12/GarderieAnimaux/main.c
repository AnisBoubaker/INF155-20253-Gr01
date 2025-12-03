#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod_personne.h"
#include "mod_animal.h"
#include "mod_garderie.h"

int main() {
    t_personne* romy=NULL;
    t_personne* jon=NULL;
    t_animal* a1=NULL;
    t_animal* a2=NULL;
    t_animal* a3=NULL;

    t_garderie* ma_garderie;

    romy = init_personne("Belanger", "Romy", "514-345-7867");
    jon = init_personne("Snow", "Jon", "514-897-9087");

    a1 = init_animal("Choupi", "Chien", "Golden", 2021, 01, 20, romy);
    a2 = init_animal("Ghost", "Loup", "Warewolf", 1980, 10, 13, jon);
    a3 = init_animal("Suni", "Chat", "Persan", 2022, 03,10, romy);

    ma_garderie = init_garderie();
    garderie_ajouter_animal(ma_garderie, a1);
    garderie_ajouter_animal(ma_garderie, a2);
    garderie_ajouter_animal(ma_garderie, a3);

    for(int i=0; i<ma_garderie->nb_animaux; i++)
    {
        afficher_animal(ma_garderie->liste[i]);
        printf("\n==============================\n");
    }


    return 0;
}
