#include <stdio.h>
#include <stdbool.h>

// TODO: définir les fonctions intermédiaires nécessaires au calcul d'un nombre sublime
// PRE a est le nombre entré par l'utilisateur et est entier
// POST renvoit la somme des diviseurs de a
int fact_nb(int a){
    int nb_somme = 0;
    printf("Diviseurs de %d : ", a);
    for (int i = 1; i < a ; i++){
        if (a % i == 0 && a / i != i-1){
            nb_somme += i;
        }
    }
    printf("\nSomme : %d\n", nb_somme);
    return nb_somme;
}
// Préconditions: n is a natural and n > 0
// Postconditions: returns true if n is magnificent, false otherwise
bool magnificent(int n) {
    // TODO: calculer si n est sublime ou pas
    if (n == fact_nb(n)){
        return true;
    } else {
        return false;
    }
}
// PRE -
// POST Renvoit la valeur rentré par l'utilisateur
int input() {
    int nb;
    scanf("%d",&nb);
    return nb;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int nb;
    // TODO: récupérer le nombre entré par l'utilisateur et déterminer s'il est sublime ou pas
    nb = input();
    if (magnificent(nb)){
       printf ("%d est un nombre sublime.",nb);
    } else {
        printf("%d n'est pas un nombre sublime.",nb);
    }
    return 0;
}

// Ne pas modifier la ligne suivante
#endif