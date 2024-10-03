#include <stdio.h>
#include <stdlib.h>


const int MAXPRENOM = 100;

void print_tab(int tableau[],int taille){
    int i;
    printf("[");
    for(i=0;i<taille;i++){
        printf("%i ",tableau[i]);
    }
    printf("]\n");
}

/*PRE: str est une chaine de caractère (se termine par '\0') initialisée
 *POST: renvoie la taille de str (le nombre de caractères avant '\0')
 * */
int str_length(char* str) {
    // TODO: à compléter
}


/*PRE: str  et score ont la même taille, str est une chaine de caractère (donc se termine par '\0'), ce sont des tableaux initialisés.
 *POST: remplit score avec les valeurs correspondants aux lettres de str (de 1 à 9)
 * */
int letters_to_val (char* str, int* score)
{
    int i = 0;
    while(*str){
        score[i] = ((*str)-'a')%9+1;
        i++;
        str++;
    }
    return i;
}

/*PRE: taille est la taille de chiffresIn.  chiffresIn est un tableau initialise, chiffresOut aussi
 *     la taille de chiffresOut est la moitie de celle de chiffresIn (si taille est pair) ou la moitie arrondie superieur sinon
 *POST: chiffresOut est rempli de la somme des chiffres deux à deux de chiffresIn, en laissant le dernier intact (si chiffresIn est impair)
 *
 *Exemple: chiffresIn = 1,2,5,9,3,4,2; chiffreOut = 3,14,7,2
 ** */

void add_two_digits (int* chiffresIn,int taille,int* chiffresOut) {
    // TODO: à compléter
}




/*PRE: numbers est un tableau initialisé contenant des nombres de 0 à 18
 * taille est la taille de numbers
 *
 * POST: tous les nombres de numbers contenant deux chiffres sont remplacés
 * par la somme de leurs chiffres.  Les autres sont inchangés
 *
 * */
void numbers_to_digits (int* numbers, int taille) {
    // TODO: à completer
}




/*PRE: prenom est une chaine de caractères initialisée et non vide
 *POST: renvoie la valeur numérologique de prenom telle que présentée
 *      par l'algorithme de
 * http://compatibilite-prenoms.fr/description-algorithme-numerologie.php
 * */

int score(char* prenom)
{
    int score[str_length(prenom)];
    //Transformation de chaque lettre du prenom en chiffre de 1 à 9, et copie de ces chiffres dans score
    //taille = la taille de score
    int taille = letters_to_val(prenom,score);
    while(taille>1){
        int tailleNew;//Taille du tableau contenant le prochain score
        if(taille%2==0){
            tailleNew = taille/2;
        }
        else{
            tailleNew = (taille-1)/2+1;
        }
        //Tableau contenant le prochain score
        int scoreNew[tailleNew];
        //Addition des chiffres de score 2 à 2.  Copie du résultat dans scoreNew
        add_two_digits(score,taille,scoreNew);
        //Transformation des nombres de scoreNew en chiffres de 1 à 9
        numbers_to_digits(scoreNew,tailleNew);
        taille=tailleNew;
        int i;
        //Copie du contenu de scoreNew dans score
        for(i=0;i<tailleNew;i++){
            score[i] = scoreNew[i];
        }
    }

    return score[0];
}

/*
 * PRE: prenom1 et prenom2 sont des chaines de caracteres initialisees
 * POST: renvoie la compatibilite entre prenom1 et prenom2 selon l'algorithme
 * presente par http://compatibilite-prenoms.fr
 *       cette compatibilite est exprimee sous la forme d'une valeur reelle entre 0 et 1.
 *
 **/

float compatibility(char* prenom1,char* prenom2){
    // TODO: à compléter
}


// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main (int argc,char** argv)
{
    char* prenom1;
    char* prenom2;
    printf("Entrez un premier prénom: ");
    scanf(" %ms",&prenom1);
    printf("Entrez un second prénom: ");
    scanf(" %ms", &prenom2);

    //TODO: à compléter

    return 0;
}

// Ne pas modifier la ligne suivante
#endif