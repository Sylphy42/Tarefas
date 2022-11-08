// abrir um arquivo
// permitir que o usuário especifique um valor/ativo
// usar o readline com essa condição
// procurar 2,3,8,36 dos instrumentos
// procurar 2,10,11,12,13 dos derivativos
// substituir o ponto no 36 por vírgula
// printar essas condiçãos de um mesmo ativo juntas na mesma linha, separado por ";"
// gerar um arquivo que printe essas partes de todos os arquivos que cumpram as condições.

//replace(strtok(NULL,';'), ',','.');

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char strtok(FILE *data){
    char str[100];
    char *sub;
    char texto[20];

    sub = strtok(str, " !,.");
    while(sub != NULL){

        printf("%s\n",sub);
        strcmp(texto,sub);

        sub = strtok(NULL," !.,");

    }

typedef struct ativo{
 int prod;
 int cod;
 char data;
 int valor;
 int coberto;
 int bloq;
 int total;
}elem;

int main(){
    int o, b;

 typedef struct ativo elem;
 FILE *arquivo = fopen("temp.csv", "r");
 fprintf("%i", ativo);

// printf("Como você quer pesquisar no arquivo?\n");
// printf("1 - Valor | 2 - Ativo \n");
// scanf("%i", &o);
//  switch(o){
//     case 1:
// printf ("Qual o valor mínimo dos ativos que deseja procurar?\n");
// scanf("%i", &b);
//     break;

//     case 2:
// printf ("Qual  ativo deseja procurar?\n");
// scanf("%i", &b);
//     break;

//     default:
//     printf("Valor inválido");
//     break;
// }

}
