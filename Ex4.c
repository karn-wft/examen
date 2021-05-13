#include <stdio.h>
int main ()
{
    float numerodepersonas, numerodealimentos, porciones;
    printf("\n\n Programa 1");
    printf("\n\n Dame el numero de personas");
    scanf("%f",&numerodepersonas);
    printf("\n\n dame el numero de aliemntos dispoibles");
    scanf("%f", &numerodealimentos);
    porciones = numerodepersonas / numerodealimentos;
    printf ("\n\n La porcion paa divir equitativamente a cada persona es %f", porciones);
    return 0;
}