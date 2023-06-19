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
                // Call open zip function here
                break;
            case 'b':
                printf("Bruteforce password\n");
                // Call bruteforce function here
                break;
            case 'd':
                printf("Dictionary file: %s\n", optarg);
                // Call bruteforce with dictionary function here
                break;
            case 'p':
                printf("Password: %s\n", optarg);
                // Call decrypt zip with password function here
                break;
            case 'e':
                printf("Extract file: %s\n", optarg);
                // Call extract file function here
                break;
            case 'i':
                printf("Include file: %s\n", optarg);
                // Call include file function here
                break;
            default:  
                printf("Unknown option: %c\n", opt);
                break;  
        }  
    } 

    return 0;
}
