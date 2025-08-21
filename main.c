#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    printf("\nabroba\n\n");
    char *str = malloc(sizeof(char) * 100);
    int scan = scanf("%s", str);
    if(scan == 0){
        printf("Erro ao ler a entrada.\n");
        free(str);
        return 1;
    }
    
    printf("Voce digitou: %s\n", str);
    free(str);

    printf("Menu:\n");
    printf("1 - Start game\n");
    printf("2 - Regras:\n");
    printf("3 - Sair\n");

    str = malloc(sizeof(char) * 2);


    free(str);
    return 0;
}