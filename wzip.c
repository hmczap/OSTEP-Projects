#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[]){
  FILE *fp = NULL;
  FILE *dest = NULL;
  errno = 0;
  char buffer[128];

  fp = fopen(argv[1] "r");
  dest = fopen(argv[2], "w");

  if (fp == NULL || errno != 0) {
    perror("wzip: cannot open specified file(s)");
    exit(1);
  }
  while (fgets(buffer, 128, fp); != NULL) {
    printf("%s", buffer)
  }
  fclose(fp);
  fclose(dest);
  
  exit(0);
}
