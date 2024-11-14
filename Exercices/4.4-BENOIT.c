#include <stdio.h>

int sum_digits(int number) {
    // Préconditions: number est un entier
    int sum_digits = 0;
    while (number > 0){
        sum_digits = sum_digits + (number %10);
        number = (number / 10);
    }
    // Postconditions: sum_of_digits contient la somme des chiffres de number
    return sum_digits;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int number;
    int sum;
    scanf ("%i",&number);

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------
    sum = sum_digits(number);
    printf("La somme des chiffres de %d est %d", number, sum);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif