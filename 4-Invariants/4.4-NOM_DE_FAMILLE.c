#include <stdio.h>

int sum_digits(int number) {
    // Préconditions: number est un entier
    int sum_of_digits;

    // ...

    // Postconditions: sum_of_digits contient la somme des chiffres de number
    return sum_of_digits;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int number, sum;


    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------
    sum = sum_digits(number);
    printf("La somme des chiffres de %d est %d", number, sum);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif