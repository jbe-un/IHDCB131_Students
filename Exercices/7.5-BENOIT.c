#include <stdio.h>
#define MAX 100

int main(){
    char mot = '.';
    char input_P2 = '-';
    char tab[MAX] = {0};
    char tab_P2[MAX];
    int count = -1;
    int bad = 0;
    int success = 0;
    printf("Joueur 1 :  Entrez un mot, lettre par lettre, et finissez par '-'' \n");
    for (int i = 0; mot != '-' ; i++){
        scanf(" %c", &mot);
        tab[i] = mot;
        tab_P2[i] = '-';
        count++;
    }
    for (int i = 0 ; i < count ; i++){
        printf(" %c", tab[i]);
    }
    printf("\n");
    printf("Au tour de Player 2 ! \n");
    printf("Le mot à trouver comporte %d lettres et vous avez 5 essais.\n", count);
    printf("{");
    for (int i = 0; i < count; i++){
        printf(" -");
    }
    printf(" }\n");
    while (bad != 5 && success != count){
        int found = 0;
        printf("\n");
        printf("Player 2 : Entrez une lettre pour trouver le mot : \n");
        scanf(" %c", &input_P2);
        for (int i = 0; i < count && found == 0; i++){
            if (input_P2 == tab[i]){
                tab_P2[i] = tab[i];
                tab[i] = '1';
                found = 1;
                success++;
                for (int j = 0; j < count ; j++){
                    if (input_P2 == tab[j]){
                        tab_P2[j] = tab[j];
                        tab[j] = '1';
                    }
                }
            }
        }
        if (found == 0){
            bad++;
            printf("Ratez ! vous avez fait %d sur 5\n",bad);
        }
        for (int j = 0; j < count ; j++){
            printf(" %c", tab_P2[j]);
        }
    }
    if (bad == 5){
        printf("Vous avez perdu !");
    } else {
        printf("\n");
        printf("Bravo ! Vous avez réussi !\n");
    }
    return 0;
}
