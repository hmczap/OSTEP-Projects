#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *fs;
    char *line = NULL;
    size_t lineSize = 128;

    if (argc == 1) {
        printf("wgrep: searchterm [file ...]\n");
        exit(1);
    }
    line = malloc(lineSize);

    if (argc == 2){
        if (fgets(line, lineSize, stdin) != NULL){
            if (strstr(line, argv[1]) != NULL){
                printf("%s", line);
            }
        }
        exit(0);
    }

    for (int i = 2; i < argc; ++i){
        fs = fopen(argv[i], "r");
        
        if (fs == NULL) {
            printf("wgrep: cannot open file\n");
            exit(1);
        }

        while (getline(&line, &lineSize, fs) != -1){
            if (strstr(line, argv[1]) != NULL){
                printf("%s", line);
            }
        }
        printf("-----------------------------");
    }
    free(line);
    fclose(fs);
    exit(0);
}

