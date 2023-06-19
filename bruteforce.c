#include <stdio.h>
#include <string.h>

void bruteforce(char* password, int index, int max_depth) {
    char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789";

    for (int i = 0; i < strlen(charset); ++i) {
        password[index] = charset[i];

        if (index == max_depth - 1) {
            printf("Trying password: %s\n", password);
            // Testez ici le mot de passe.
        }
        else {
            bruteforce(password, index + 1, max_depth);
        }
    }
}

void bruteforce_with_dictionary(char* dictionary_filename) {
    // Ouvrez le fichier du dictionnaire et essayez chaque mot comme mot de passe.
}
