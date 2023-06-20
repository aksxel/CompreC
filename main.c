#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int opt;
    while((opt = getopt(argc, argv, "hobdp:e:i:")) != -1) {
        switch(opt) {
            case 'h':
                printf("Show help here\n");
                break;
            case 'o':
                printf("Open zip file\n");
                // Appeler la fonction d'ouverture de fichier zip ici
                break;
            case 'b':
                printf("Bruteforce password\n");
                // Appeler la fonction de bruteforce ici
                break;
            case 'd':
                printf("Dictionary file: %s\n", optarg);
                // Appeler la fonction de bruteforce avec dictionnaire ici
                break;
            case 'p':
                printf("Password: %s\n", optarg);
                // Appeler la fonction de déchiffrement de fichier zip avec mot de passe ici
                break;
            case 'e':
                printf("Extract file: %s\n", optarg);
                // Appeler la fonction d'extraction de fichier ici
                break;
            case 'i':
                printf("Include file: %s\n", optarg);
                // Appeler la fonction d'inclusion de fichier ici
                break;
            default:
                printf("Unknown option: %c\n", opt);
                break;
        }
    }

    return 0;
}
