#include <stdio.h>
#include <stdlib.h>

char* readline(FILE *data){
    int size = 10;
    char *line = malloc(sizeof(char) * size);
    int i = 0;
    do{
        fread(&line[i], sizeof(char), 1, data);
        i++;
        if( i == size ){
            size += 10;
            line = realloc(line, sizeof(char) * size);
        }
    }while( line[i-1] != '\n' && line[i-1] != '\r'  && line[i-1] != EOF );

    line[i] = '\0';
    return line;
}

int main(int argc, char **argv){
  FILE *arquivo = fopen(argv[1], "r");

  char *line = readline(arquivo);
  printf("%s", line);


  line = readline(arquivo);
  printf("%s\n", line);

  line = readline(arquivo);
  printf("%s\n", line);

  line = readline(arquivo);
  printf("%s\n", line);
