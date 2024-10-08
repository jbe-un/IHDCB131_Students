#include <stdio.h>

int main(void) {
    int a, b, c, mediane;

    // TODO: afficher une phrase demandant d'encoder les valeurs des trois nombres et récupérer leur valeur
    printf("Encoder un premier nombre :");
    scanf("%i",&a);
    printf("Encoder un second nombre :");
    scanf("%i",&b);
    printf("Encoder un troisième nombre :");
    scanf("%i",&c);
    // TODO: calculer la médiane des trois nombres
    if ((a>=b && a<=c) || (a<=b && a>=c))
    {
        mediane = a;
    }
    else if ((b>=a && b<=c) ||(b<=a && b>=c))
    {
        mediane = b;
    }
    else {
        mediane = c;
    }
    // TODO: afficher une phrase montrant la médiane des trois nombres
    printf("la valeur médiane de %i,%i et %i est %i\n",a,b,c,mediane);
    return 0;
}
