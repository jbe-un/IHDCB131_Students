#include <stdio.h>

int computeMaximum(int a, int b, int c) {
    int maximum;
    // Préconditions: a, b et c sont des nombres entiers

    // TODO: calculer le maximum entre les trois nombres a, c et c

    // Postconditions: la variable maximum contient le maximum entre a, b et c
    return maximum;
}

int main(void) {
    int a, b, c, maximum;
    printf("Veuillez entrer trois nombres: ");
    // TODO: récupérer les valeurs de a, b et c

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------

    // Appel de la fonction "computeMaximum" qui calcule le maximum entre trois nombres donnés et le stocke dans la variable "maximum"
    maximum = computeMaximum(a, b, c);
    printf("Le maximum entre les nombres %d, %d et %d est %d", a, b, c, maximum);

    return 0;
}