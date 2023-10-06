#include <stdio.h>

double compute_average(int sum, int number_of_numbers) {
    // Préconditions: sum et number_of_numbers sont des nombres entiers
    double average;

    // TODO: calculer la moyenne

    // Postconditions: average contient la moyenne de la somme
    return average;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    double average;
    int sum, number_of_numbers;

    // TODO: calculer la somme


    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------
    average = compute_average(sum, number_of_numbers);
    printf("La moyenne des nombres entrées est : %.2lf", average);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif