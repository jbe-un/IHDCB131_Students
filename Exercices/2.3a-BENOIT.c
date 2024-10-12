#include <stdlib.h>
#include <stdio.h>

int main(void){
    printf("Entrez la taille de trois côtés: ");
    //Encodage des valeurs dans les variables C1,C2 et C3
    float c1;
    scanf("%f",&c1);
    float c2;
    scanf("%f",&c2);
    float c3;
    scanf("%f",&c3);

    if(c1<=0 || c2<=0 || c3<=0){
        printf("Une taille de côté doit être strictement positive !\n");
    }
        //Est ce que c'est un triangle rectangle ? A²+B²=c²
    else if((c1*c1)*(c2*c2)==(c3*c3) || (c2*c2)*(c3*c3)==(c1*c1) || (c1*c1)*(c3*c3)==(c2*c2)){
            printf("C'est un triangle rectangle.\n");
    }

        //Est ce que c'est un triangle isocèle ? 2*h+l
    else if(((c1==c2) || (c1==c3) || (c2==c3)) && ((c1!=c3) || (c2!=c3) || (c1!=c2))){
            printf("C'est un triangle isocèle.\n");
    }
    else if((c1==c2) && (c2==c3)){
            printf("C'est un triangle équilatérale.\n");
    }
    else if((c1!=c2) && (c1!=c3) && (c2!=c3)){
            printf("C'est un triangle quelconque.\n");
    }      
      
      return 0;
    }
