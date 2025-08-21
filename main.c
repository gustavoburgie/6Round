#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>

bool errorCheck(int n);
int showRules();

int main(){
    int sc = 0;

    while(true){
        printf("\nMenu:\n");
        printf("1 - Start game\n");
        printf("2 - Regras\n");
        printf("3 - Sair\n");
        errorCheck(scanf("%d",&sc));
        switch (sc)
        {
        case 1:
            printf("Finge q começou o jogo\n");
            return 0;
        
        case 2:
            showRules();
            errorCheck(scanf("%d",&sc));
            break;
        
        case 3:
            printf("Saindo...\n");
            exit(EXIT_SUCCESS);
            return 0;
        
        default:
            printf("\nEscolha uma opção válida.\n");
            sleep(1);
            break;
        }
    }

    return 0;
}
/*
To do:
fazer as regras estarem escritas em um arquivo
*/
int showRules(){
    int sc = 0;
    while(sc == 0){
        printf("Aqui vão todas as regras do jogo:\n");
        printf("1: sou foda, logo perdeu\n");
        printf("2:  Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed et odio erat. Pellentesque nec hendrerit sem, ac efficitur nunc. Donec consequat metus a tempor vestibulum. Vivamus tincidunt porttitor mauris sed consectetur. Etiam consequat diam lectus, non porttitor nisl tempor sit amet. Ut volutpat mi nunc, egestas consequat diam volutpat nec. Suspendisse potenti. \n");
        printf("\n1 - Prox.  Pagina\n");
        printf("0 - Voltar\n");
        errorCheck(scanf("%d", &sc));
        if(sc == 0)
        return 0;
        if(sc == 1){
            printf("nao tem hahahaahahahaha\n");
            sc = 0;
        }
    }
    return 1; //deu merda
}

bool errorCheck(int n){
    if(n == 0){
        printf("Erro ao ler a entrada.\n");
        exit(EXIT_FAILURE);
    }
    else{
        return false;
    }
}