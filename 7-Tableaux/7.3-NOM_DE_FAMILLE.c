#include <stdlib.h>
#include <stdio.h>
#define MAX 100

//PRE: length is the length of the array tab
//POST: displays the content of tab, in the form {element0, element1, ..., element(length-1)}
//      tab is not modified
void display_array(int length, int tab[length]){
    //TODO: à compléter
}

//PRE: length is the length of the array tab
//POST: the content of tab is modified, each element is now the doubled beginning element + 1
void encrypt1(int length,int tab[length]){
    //TODO: à compléter
}
//PRE: length is the length of the array tab
//POST: the content of tab is modified, each element is now the beginning element - 1 divided by two
void decrypt1(int length, int tab[length]){
    //TODO: à compléter
}

//PRE: length is the length of the array tab.  key >= 0
//POST: the content of tab is modified, each element tab[i] is now tab[i-1] + tab[i]
// for each i such as 0<i<length; and the element 0 is now tab[0]+key
void encrypt2(int length,int tab[length],int key){
    //TODO: à compléter
}
//PRE:  (à compléter)
//POST: (à compléter pour déchiffrer un tableau chiffré par la fonction "encrypt2")
void decrypt2(int length, int tab[length],int key){
    //TODO: à compléter
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(void){
    printf("Entrez une suite de chiffres, et finissez par -1: ");
    int number;
    int numbers_array[MAX]={-1};
    scanf("%d",&number);
    int i = 0;
    while(i<MAX && number>=0 && number < 10){
        numbers_array[i]=number;
        scanf("%d",&number);
        i++;
    }
    printf("Tableau entré: ");
    display_array(i,numbers_array);
    printf("\n");
/*
    int methode;
    printf("Quelle méthode de chiffrement ? ");
    scanf("%d",&methode);
    
    if(methode==1){
        encrypt1(i,numbers_array);
        display_array(i,numbers_array);
        decrypt1(i,numbers_array);
        display_array(i,numbers_array);
    }
    else if(methode==2){
        printf("Quelle clé de chiffrement ? ");
        int key ;
        scanf("%i", &key) ;
        encrypt2(i,numbers_array, key);
        display_array(i,numbers_array);
        decrypt2(i,numbers_array, key);
        display_array(i,numbers_array);
    }
 */
    return 0;
}

// Ne pas modifier la ligne suivante
#endif