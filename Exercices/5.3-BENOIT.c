#include <stdlib.h>
#include <stdio.h>

//PRE: 0<=nb<=25
//POST: renvoie la lettre de l'alphabet qui correspond au nombre entré (0->a,1->b...)
char versLettre(int nb){
    return 'a'+nb;      
}

//PRE: c est une lettre minuscule entre 'a' et 'z'.
//POST: renvoie le nombre correspondant à cette lettre (a->0,b->1,...)
int versNombre(char c){
    return c-'a';
}

//PRE://
//POST: renvoie la valeur absolue de n
int abs(int n){
    if(n<0){
        n=-n;
    }
    return n;
}
//PRE: /
//POST: renvoie la somme des chiffres de nb
int sommeChiffres(int nb){
    int somme = 0;
    while(nb>0){
        somme+=nb%10;
        nb=nb/10;
    }
    return somme;
}

int calculer_somme_lettre(void){
  
  char lettre;
  int somme=0;
  printf("Prénom1:\n");
  do{
    scanf(" %c",&lettre);
    if(lettre>='a' && lettre <='z'){
        somme+=versNombre(lettre);  
    }
  }while(lettre>='a' && lettre <='z');

  printf("%d\n",somme);
  
  return somme;
}
int somme_prenom(int R1,int R2) {
    if(R1<R2){
        return R1-R2;
    }else{
        return R2-R1;
    }
}

int main(void){
    int R1 = calculer_somme_lettre();
    int R2 = calculer_somme_lettre();
    //int resultat = somme_prenom(R1,R2);
    int resultat = sommeChiffres(abs(resultat));
    printf("%d",resultat);
}

