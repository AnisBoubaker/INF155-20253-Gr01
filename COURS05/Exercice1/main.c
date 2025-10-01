#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double min_de_3(double val1, double val2, double val3);

int main() {

    double a, b, c;
    a = 10;
    b = -2;
    c = 120;

    printf("%lf\n", min_de_3(a, b, c));
    printf("a=%lf, b=%lf et c=%lf\n", a, b, c);

    return EXIT_SUCCESS;
}

double min_de_3(double val1, double val2, double val3)
{
    double min;

    //val1 = fabs(val1);
    val1 = val1<0 ? -val1 : val1;
    val2 = fabs(val2);
    val3 = fabs(val3);

    if(val1<val2){
        min = val1;
    } else {
        min = val2;
    }
    if(val3 < min){
        min = val3;
    }

    return min;

}