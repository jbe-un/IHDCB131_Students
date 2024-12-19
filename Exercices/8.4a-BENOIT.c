#include <stdio.h>
#define MAX 100
//char *vowels
// PRE: TODO
// POST: TODO
void fill_with_vowels(char *word) {
    // TODO: à compléter
    char marque[MAX] = { };
    char result[MAX];
    int count = 0 ;
    for (int i = 0 ; word[i] != '\0' ; i++){
        if (word[i] >= 'a' && word[i] <= 'z' ){
            if (word[i] == 'a' && marque[0] != 'a'){
            marque[0] = 'a';
            count++;
            } else if (word[i] == 'e' && marque[1] != 'e'){
                marque[1] = 'e';
                count++;                
            } else if (word[i] == 'i' && marque[2] != 'i'){
                marque[2] = 'i';
                count++;               
            } else if (word[i] == 'o' && marque[3] != 'o'){
                marque[3] = 'o';
                count++; 
            } else if (word[i] == 'u' && marque[4] != 'u'){
                marque[4] = 'u';
                count++; 
            } else if (word[i] == 'y' && marque[5] != 'y'){
                marque[5] = 'y';
                count++; 
            }           
        }
    }
    for (int i = 0, j = 0; i < 6; i++){
        if (marque[i] !='\0'){
            result[j] = marque[i];
            j++;
        }
    }
    printf("%d voyelles : %s\n",count,result);
}

// PRE: TODO
// POST: TODO
void fill_with_consonants(char *word) {
    char marque[MAX] = { };
    char result[MAX];
    int count = 0 ;
    for (int i = 0 ; word[i] != '\0' ; i++){
        if (word[i] >= 'a' && word[i] <= 'z' ){
            if (word[i] == 'b' && marque[0] != 'b'){
                marque[0] = 'b';
                count++;
            } else if (word[i] == 'c' && marque[1] != 'c'){
                marque[1] = 'c';
                count++;                
            } else if (word[i] == 'd' && marque[2] != 'd'){
                marque[2] = 'd';
                count++;               
            } else if (word[i] == 'f' && marque[3] != 'f'){
                marque[3] = 'f';
                count++; 
            } else if (word[i] == 'g' && marque[4] != 'g'){
                marque[4] = 'g';
                count++; 
            } else if (word[i] == 'h' && marque[5] != 'h'){
                marque[5] = 'h';
                count++; 
            } else if (word[i] == 'j' && marque[6] != 'j'){
                marque[6] = 'j';
                count++; 
            } else if (word[i] == 'k' && marque[7] != 'k'){
                marque[7] = 'k';
                count++; 
            } else if (word[i] == 'l' && marque[8] != 'l'){
                marque[8] = 'l';
                count++; 
            } else if (word[i] == 'm' && marque[9] != 'm'){
                marque[9] = 'm';
                count++; 
            } else if (word[i] == 'n' && marque[10] != 'n'){
                marque[10] = 'n';
                count++; 
            } else if (word[i] == 'p' && marque[11] != 'p'){
                marque[11] = 'p';
                count++; 
            } else if (word[i] == 'q' && marque[12] != 'q'){
                marque[12] = 'q';
                count++; 
            } else if (word[i] == 'r' && marque[13] != 'r'){
                marque[13] = 'r';
                count++; 
            } else if (word[i] == 's' && marque[14] != 's'){
                marque[14] = 's';
                count++; 
            } else if (word[i] == 't' && marque[15] != 't'){
                marque[15] = 't';
                count++; 
            } else if (word[i] == 'v' && marque[16] != 'v'){
                marque[16] = 'v';
                count++; 
            } else if (word[i] == 'w' && marque[17] != 'w'){
                marque[17] = 'w';
                count++; 
            } else if (word[i] == 'x' && marque[18] != 'x'){
                marque[18] = 'x';
                count++; 
            } else if (word[i] == 'z' && marque[19] != 'z'){
                marque[19] = 'z';
                count++; 
            }           
        }
    }
    for (int i = 0, j = 0; i < 20; i++){
        if (marque[i] !='\0'){
            result[j] = marque[i];
            j++;
        }
    }
    printf("%d consonnes : %s\n",count,result);
}

// PRE: TODO
// POST: TODO
int str_length(char *str) {
    // TODO: à compléter
    int length = 0;
    for (int i = 0; str[i] != '\0' ; i++){
        if (str[i] != '\0'){
            length++;
        }
    }
    return length;
}

int main(void) {
    // TODO: à compléter
    char mot[MAX];
    scanf("%s", mot);
    fill_with_vowels(mot);
    fill_with_consonants(mot);


    return 0;
}