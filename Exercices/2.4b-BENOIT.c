#include <stdio.h>

int main(void) {
    int a, b, c, mediane;

    // TODO: afficher une phrase demandant d'encoder les valeurs des trois nombres et récupérer leur valeur
    printf ("Encodez trois valeurs : \n");
    printf ("La valeur a:\n");
    scanf ("%i",&a);
    printf ("Encodez la valeur b:\n");
    scanf ("%i",&b);
    printf ("Encodez la valeur c:\n");
    scanf ("%i",&c);
    // TODO: calculer la médiane des trois nombres
    if ((a > b && a < c) || (a < b && a > c)){
        mediane = a;
    }
    if ((b > a && b < c) || (b < a && b > c)){
        mediane = b;
    }
    else {
        mediane = c;
    }        
    // TODO: afficher une phrase montrant la médiane des trois nombres
    printf ("la valeur médiane de vos nombres %i,%i et %i est %i\n", a,b,c,mediane);
    return 0;
}
