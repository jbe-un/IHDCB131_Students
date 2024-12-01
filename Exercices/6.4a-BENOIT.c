#include <stdio.h>
#include <stdbool.h>

// TODO: définir une fonction qui calcule la somme des diviseurs d'un nombre et qui sera appelée dans la fonction "areFriends"

// Préconditions: num1 and num2 are natural
// Postconditions: returns true if nb1 and nb2 are amicals, false otherwise
//int are_friends(int nb1, int nb2) {
    // TODO: calculer si les nombres sont amicaux ou pas

//}
// PRE int a est un entier naturel
// POST renvoit la somme des diviseurs de a
int diviseur_nb(int a){
    int resultat_diviseur = 0;
    for (int i = 1 ; i < a ; i ++){
        if ( a % i == 0 ){
            resultat_diviseur += i;
        }
    }
    return resultat_diviseur;
}
// PRE A est resultat_diviseur et b est nb
// POST Renvoit vrai si on trouve l'égualité de résultat_diviseur avec nb, les nombres sont amicaux, sinon renvoit false
bool are_friends(int a,int b){
    if ( a == b){
        return true;
    } else {
        return false;
    }
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int nb1, nb2;
    // TODO: récupérer les deux nombres encodés par l'utilisateur et calculer s'ils sont amicaux ou pas
    printf("Entrez deux nombres : \n");
    scanf(" %d %d", &nb1, &nb2);
    int resultat_nb1 = diviseur_nb(nb1);
    int resultat_nb2 = diviseur_nb(nb2);
//    int resultat_friend = are_friends(resultat_nb1,nb2);
    if (are_friends(resultat_nb1,nb2) && are_friends(resultat_nb2,nb1) == 1){
        printf("%d et %d sont des nombres amicaux\n", nb1,nb2);
    } else {
        printf("%d et %d ne sont pas des nombres amicaux\n", nb1, nb2);
    }
//    printf("%d\n",resultat_friend);
//    printf("%d\n",resultat_friend2);
    // are_friends(nb1,nb2);
    return 0;
}

// Ne pas modifier la ligne suivante
#endif