#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double x, y;
    int cadran = 0;

    printf("Saisir l'abscisse: ");
    scanf("%lf", &x);
    printf("Saisir l'ordonnee: ");
    scanf("%lf", &y);

//    if(x>0 && y>0){
//        cadran = 1;
//    } else if(x>0 && y<0){
//        cadran = 2;
//    } else if(x<0 && y<0){
//        cadran = 3;
//    } else {
//        cadran = 4;
//    }
    int z;
    if(x>0)
    {
        if(y>0)
            cadran = 1;
        else
            cadran = 2;
        z = 10;
    } else {
        if(y<0)
            cadran = 3;
        else
            cadran = 4;
    }

    printf("Vous etes dans le cadran %d\n", cadran);

    return EXIT_SUCCESS;
}
