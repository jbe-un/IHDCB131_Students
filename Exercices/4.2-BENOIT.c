#include <stdio.h>

int main(void) {
    double average, sum, nbr;
    int number_of_numbers;
    // PRE: /
    average = 0;
    // TODO: Initialisation - initialiser les variables
    sum = 0;
    number_of_numbers = -1;
    nbr = 0;
    // INV: TODO          
    // TODO: Boucle - calculer la somme
    while(nbr >= 0){
        sum = sum + nbr;
        scanf("%lf",&nbr);
        number_of_numbers++;
    }
    // TODO: Clôture - calculer la moyenne²²  
    average = (sum / (float)number_of_numbers);
    // POST: sum contient la somme des nombres entrés,
    //       number_of_numbers contient le nombre de nombres entrés et
    //       average contient la moyenne des nombres entrés
    
    printf("La moyenne des nombres entrés est : %.2lf", average);

    return 0;
}