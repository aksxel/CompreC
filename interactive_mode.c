#include <ncurses.h>    // Inclusion de la bibliothèque ncurses
#include <stdlib.h>     // Inclusion de la bibliothèque standard C
#include <string.h>     // Inclusion de la bibliothèque de manipulation de chaînes de caractères en C

void start_interactive_mode() {
    initscr();          // Initialisation de l'environnement ncurses
    noecho();           // Désactivation de l'écho des caractères saisis par l'utilisateur
    curs_set(FALSE);    // Masquage du curseur sur l'écran

    while (1) {         // Boucle principale du mode interactif
        clear();        // Efface l'écran
        printw("Actions: extract file or directory(e), visit directory(v), open file(o), quit(q)\n");  // Affiche les options disponibles
        printw("1 - some_directory\n");
        printw("2 - some_file.txt\n");
        printw("3 - some_other_file.txt\n");

        char ch = getch();      // Lecture de la touche pressée par l'utilisateur

        switch(ch) {            // Traitement de la touche pressée
            case 'q':           // Si 'q' est pressé, quitter le programme
                endwin();       // Terminer l'utilisation de la bibliothèque ncurses
                exit(0);        // Quitter le programme
            case 'e':           // Si 'e' est pressé, effectuer l'extraction d'un fichier ou d'un répertoire
                printw("Extract file or directory\n");
                // Ajoutez ici le code pour extraire le fichier ou le répertoire
                break;
            case 'v':           // Si 'v' est pressé, effectuer la visite d'un répertoire
                printw("Visit directory\n");
                // Ajoutez ici le code pour visiter le répertoire
                break;
            case 'o':           // Si 'o' est pressé, ouvrir un fichier
                printw("Open file\n");
                // Ajoutez ici le code pour ouvrir le fichier
                break;
            default:            // Si une autre touche est pressée, afficher un message d'erreur
                printw("Unknown command: %c\n", ch);
                break;
        }

        getch();    // Attendre que l'utilisateur appuie sur une touche avant de rafraîchir l'écran
    }

    endwin();   // Terminer l'utilisation de la bibliothèque ncurses
}
