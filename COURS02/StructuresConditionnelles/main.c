#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int valeur1 = 10;
    int valeur2 = 2;
    int valeur3 = 3;

    if( (valeur1 % valeur2)==0 ) //Equivalent à !(valeur1 % valeur2)
    {
        printf("%d est divisible par %d\n", valeur1, valeur2);
    }
    else if( (valeur1 % valeur3)==0 )
    {
        printf("%d n'est pas divisible par %d mais divisible par %d\n"
               , valeur1, valeur2, valeur3);
    }
    else
    {
        printf("%d n'est ni divisible par %d, ni par %d\n"
                , valeur1, valeur2, valeur3);
    }

    /****************************************************/

    int age = 20;
    double salaire = 150000;

    if(age>18)
    {
        if(salaire > 200000)
        {
            printf("Vous pouvez être notre client. \n");
        }
        else
        {
            printf("Désolé, vous n'etes pas assez riche.\n");
        }
    }
    else {
        printf("Désolé vous etes trop jeune.\n");
    }



    return EXIT_SUCCESS;
}
