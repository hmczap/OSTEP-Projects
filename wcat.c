#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  FILE *fp = NULL;
  char buffer[128];

  for (int i = 1; i < argc; ++i){
    fp = fopen(argv[i], "r");

    if (fp == NULL) {
      printf("wcat: cannot open file\n");
      exit(1);
    }
    while (fgets(buffer, 128, fp); != NULL) {
      printf("%s", buffer);
    }
    fclose(fp);    
  }
  exit(0)
}
