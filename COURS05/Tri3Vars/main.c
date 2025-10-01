#include <stdio.h>

void trier_variable(int* val1, int* val2, int* val3);

int main() {

    int a=55, b=30, c=12;

    trier_variable(&a, &b, &c);

    printf("a = %d, b=%d, c=%d", a, b, c);


//    for(int i=0; i<2; i++){ //On le fait 2 fois dans le cas où c'est trié à l'envers
//        if(a > b){ //On permute a et b
//            tmp = a;
//            a = b;
//            b = tmp;
//        }
//        if(b > c) { //On permute b et c
//            tmp = b;
//            b = c;
//            c = tmp;
//        }
//    }
//    printf("a = %d, b=%d, c=%d", a, b, c);

    return 0;
}

void trier_variable(int* val1, int* val2, int* val3)
{
    int tmp;
    for(int i=0; i<2; i++){ //On le fait 2 fois dans le cas où c'est trié à l'envers
        if(*val1 > *val2){ //On permute a et b
            tmp = *val1;
            *val1 = *val2;
            *val2 = tmp;
        }
        if(*val2 > *val3) { //On permute b et c
            tmp = *val2;
            *val2 = *val3;
            *val3 = tmp;
        }
    }
}
