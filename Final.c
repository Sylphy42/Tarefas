// abrir um arquivo
// permitir que o usuário especifique um valor/ativo
// usar o readline com essa condição
// procurar 2,3,8,36 dos instrumentos
// procurar 2,10,11,12,13 dos derivativos
// substituir o ponto no 36 por vírgula
// printar essas condiçãos de um mesmo ativo juntas na mesma linha, separado por ";"
// gerar um arquivo que printe essas partes de todos os arquivos que cumpram as condições.

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

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
    int o;
    
 typedef struct ativo elem;
printf("Como você quer pesquisar no arquivo?\n");
printf("1 - Valor | 2 - Ativo \n");
scanf("%i", &o);
 switch(o){
    case 1:
printf ("Privet\n");
    break;

    case 2:
printf ("Hallo\n");
    break;

    default:
    printf("Valor inválido");
    break;
}

}
