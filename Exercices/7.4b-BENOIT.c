#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX 100

// Préconditions: length est la longueur du tableau, tab[length] est le tableau de nombre entier
// Postconditions: return true quand c'est un palindrome sinon return false
bool palindrome(int length, int tab[length]){
    // TODO: à compléter
    int equal = 0;
    for (int i = 0 ; i < length ; i++ ){
        if (tab[i] == tab[length-i]){
            equal = equal + 1 ;
        }
    }
    if (equal == length){
        return true;
    } else {
        return false;
    }
}

// Préconditions: le tableau est composé de valeur entière
// Postconditions: le tableau est trié par ordre croissant
void sort_array(int length, int tab[length]) {
    // TODO: à compléter
    int nb1 = 0 ;
    int nb2 = 0 ;
    for (int j = 0 ; j < length ; j++){
        for (int i = 0 ; i <= length ; i++){
            if (tab[i] > tab[i+1] && tab[i+1] != 0){
                nb1 = tab[i];
                nb2 = tab[i+1];
                tab[i] = nb2;
                tab[i+1] = nb1;
            }
        }
    }
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(){
    int length;
    bool verification;
    // TODO: récupérer la taille du tableau, et le trier
    scanf("%d", &length);
    length = length -1;
    // définir le tableau
    int tab[MAX] = {0};
    tab[MAX] = tab[length];
    for (int i = 0 ; i <= length ; i++){
        scanf ("%d",&tab[i]);
    }
    //regarder s'il est un palindrome ou non
    verification = palindrome(length,tab);
    if (verification){
        printf("La suite ");
        for (int i = 0 ; i <= length ; i++){
            printf("%d", tab[i]);
            if (tab[i+1] > 0 ){
                printf(",");
            } else {
                printf(" est un palindrome.\n");
            }            
        }
    } else {
            printf("La suite ");
            for (int i = 0 ; i <= length ; i++){
                printf("%d", tab[i]);
                if (tab[i+1] > 0 ){
                    printf(",");
                } else {
                    printf(" n'est pas un palindrome.\n");
                }            
            }
        }
    //et le trier
    sort_array(length,tab);
    for (int i = 0; i <= length ; i++){
        printf("%d", tab[i]);
    }


    return 0;
}

// Ne pas modifier la ligne suivante
#endif