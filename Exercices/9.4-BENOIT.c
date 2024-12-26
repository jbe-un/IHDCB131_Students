#include <stdio.h>
#include <stdlib.h>

enum MusicType {
    REEL,
    JIG,
    POLKA,
    MAZURKA
};

struct MusicPiece {
    char title[50];
    enum MusicType type;
    int duration;
};

int str_compare(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void encode_music_piece(struct MusicPiece *music_piece) {
    char type_str[10];
    printf("Titre: ");
    scanf("%s", music_piece->title);
    
    printf("Type (reel, jig, polka, mazurka): ");
    scanf("%s", type_str);
    
    if (str_compare(type_str, "reel") == 0) music_piece->type = REEL;
    else if (str_compare(type_str, "jig") == 0) music_piece->type = JIG;
    else if (str_compare(type_str, "polka") == 0) music_piece->type = POLKA;
    else if (str_compare(type_str, "mazurka") == 0) music_piece->type = MAZURKA;
    
    printf("Durée: ");
    scanf("%d", &music_piece->duration);
    printf("\n");
}

void display_average_length(struct MusicPiece *music_pieces, int number_music_pieces) {
    double total = 0;
    for (int i = 0; i < number_music_pieces; i++) {
        total += music_pieces[i].duration;
    }
    printf("Durée moyenne: %.2f\n", total / number_music_pieces);
}

void display_longest_music_piece(struct MusicPiece *music_pieces, int number_music_pieces) {
    int max_duration = 0;
    int max_index = 0;
    
    for (int i = 0; i < number_music_pieces; i++) {
        if (music_pieces[i].duration > max_duration) {
            max_duration = music_pieces[i].duration;
            max_index = i;
        }
    }
    printf("Morceau le plus long: %s\n", music_pieces[max_index].title);
}

void display_longest_suite(struct MusicPiece *music_pieces, int number_music_pieces) {
    int current_length = 1;
    int max_length = 1;
    int start_index = 0;
    int max_start_index = 0;
    
    for (int i = 1; i < number_music_pieces; i++) {
        if (music_pieces[i].type == music_pieces[i-1].type) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
                max_start_index = start_index;
            }
        } else {
            current_length = 1;
            start_index = i;
        }
    }
    
    printf("Titres de la suite la plus longue:\n");
    for (int i = max_start_index; i < max_start_index + max_length; i++) {
        printf("%s\n", music_pieces[i].title);
    }
}

#ifndef TEST_IHDCB131

int main(int argc, char** argv) {
    int number_pieces;
    printf("Nombre de morceaux à encode: ");
    scanf("%d", &number_pieces);
    
    struct MusicPiece *music_pieces = malloc(number_pieces * sizeof(struct MusicPiece));
    
    for (int i = 0; i < number_pieces; i++) {
        printf("Morceau %d\n", i + 1);
        encode_music_piece(&music_pieces[i]);
    }
    
    display_average_length(music_pieces, number_pieces);
    display_longest_music_piece(music_pieces, number_pieces);
    display_longest_suite(music_pieces, number_pieces);
    
    free(music_pieces);
    return 0;
}

#endif