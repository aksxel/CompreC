#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

void start_interactive_mode() {
    // Initialiser ncurses
    initscr();
    noecho();
    curs_set(FALSE);

    // Main loop
    while (1) {
        clear();
        printw("Actions: extract file or directory(e), visit directory(v), open file(o), quit(q)\n");
        printw("1 - some_directory\n");
        printw("2 - some_file.txt\n");
        printw("3 - some_other_file.txt\n");

        char ch = getch();

        switch(ch) {
            case 'q':
                endwin();
                exit(0);
            case 'e':
                printw("Extract file or directory\n");
                // Ajoutez ici le code pour extraire le fichier ou le répertoire
                break;
            case 'v':
                printw("Visit directory\n");
                // Ajoutez ici le code pour visiter le répertoire
                break;
            case 'o':
                printw("Open file\n");
                // Ajoutez ici le code pour ouvrir le fichier
                break;
            default:
                printw("Unknown command: %c\n", ch);
                break;
        }
        
        getch(); // Attendre que l'utilisateur appuie sur une touche avant de rafraîchir l'écran
    }

    // Terminer ncurses
    endwin();
}
