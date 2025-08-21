#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    printf("\nabroba\n\n");
    char *str = malloc(sizeof(char) * 100);
    scanf("%s", &str);
    printf("Voce digitou: %s\n", str);

    free(str);
    return 0;
}