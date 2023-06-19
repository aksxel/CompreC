#include <stdio.h>
#include <zip.h>

zip_t* open_zip_file(char* filename) {
    int err = 0;
    zip_t* archive = zip_open(filename, ZIP_RDONLY, &err);

    if (archive == NULL) {
        zip_error_t error;
        zip_error_init_with_code(&error, err);
        printf("Failed to open the zip file: %s\n", zip_error_strerror(&error));
        zip_error_fini(&error);
        return NULL;
    }

    return archive;
}

void close_zip_file(zip_t* archive) {
    zip_close(archive);
}

// Ajoutez ici d'autres fonctions pour interagir avec les fichiers zip.
