#include <stdio.h>
#include <stdlib.h>

int main() {
    char choix;

    printf("Saisir A, B ou C: ");
    scanf("%c", &choix);

    switch(choix)
    {
        case 'A':
            printf("Vous avez choisi A, bon choix!\n");
            break;
        case 'B':
            printf("Vous avez choisi B, pas mal!\n");
            break;
        case 'C':
            printf("Vous avez choisi C, c’est bien!\n");
            break;
        default:
            printf("vous deviez saisir A, B ou C… Quel dommage!\n");
    }
    return EXIT_SUCCESS;
}
