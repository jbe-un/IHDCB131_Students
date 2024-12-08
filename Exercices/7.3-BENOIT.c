#include <stdio.h>

#define MAX 100

// PRE: length est la longueur du tableau tab
// POST: affiche le contenu de tab, sous la forme {element0, element1, ..., element(length-1)} et ne modifie pas tab
void display_array(int length, int tab[length]) {
    // TODO: à compléter
    printf ("{");
    for (int i = 0 ; i < length ; i++){
        printf("%d",tab[i]);
        if (tab[i+1] > 0){
            printf(",");
        }
    }
    printf("}\n");
}

// PRE: length est la longueur du tableau tab
// POST: le contenu de tab est modifié, chaque élément est maintenant égal au double de lui-même plus 1
void encrypt1(int length, int tab[length]) {
    // TODO: à compléter
    for (int i = 0 ; i < length ; i++){
        tab[i] = tab[i] * 2 + 1;
    }
}

// PRE: length est la longueur du tableau tab
// POST: le contenu de tab est modifié, chaque élément est maintenant égal à son ancienne valeur moins 1 puis divisée par 2
void decrypt1(int length, int tab[length]) {
    // TODO: à compléter
    for (int i = 0 ; i < length ; i++){
        tab[i] = (tab[i] - 1) / 2 ; 
    }
}

// PRE: length est la longueur du tableau tab et key >= 0
// POST: le contenu de tab est modifié, chaque élément tab[i] est maintenant tab[i-1] + tab[i]
//       pour chaque i tel que 0 < i < length et le premier élément est maintenant tab[0] + key
void encrypt2(int length, int tab[length], int key) {
    // TODO: à compléter
    for (int i = 0 ; i < length ; i++){
        if (i == 0 ){
            tab[i] = tab[i] + key;
        } else {
            tab[i] = tab[i] + tab[i-1];
        }
    }
}

// PRE:  (à compléter)
// POST: (à compléter pour déchiffrer un tableau chiffré par la fonction "encrypt2")
void decrypt2(int length, int tab[length], int key) {
    // TODO: à compléter
    for (int i = length ; i >= 0 ; i--){
        if (i == 0 ){
            tab[i] = tab[i] - key;
        } else {
            tab[i] = tab[i] - tab[i-1];
        }
    }
}

int main(void) {
    int number, methode, key;
    int numbers_array[MAX] = {-1};

    printf("Entrez une suite de chiffres, et finissez par -1: ");
    scanf("%d", &number);

    int i = 0;
    while (i < MAX && number >= 0 && number < 10) {
        numbers_array[i] = number;
        scanf("%d", &number);
        i++;
    }

    printf("Tableau entré: ");
    display_array(i, numbers_array);
    printf("\n");

    printf("Quelle méthode de chiffrement ? ");
    scanf("%d", &methode);

    if (methode == 1) {
        encrypt1(i, numbers_array);
        display_array(i, numbers_array);
        decrypt1(i, numbers_array);
        display_array(i, numbers_array);
    } else if (methode == 2) {
        printf("Quelle clé de chiffrement ? ");
        scanf("%i", &key);

        encrypt2(i, numbers_array, key);
        display_array(i, numbers_array);
        decrypt2(i, numbers_array, key);
        display_array(i, numbers_array);
    }

    return 0;
}