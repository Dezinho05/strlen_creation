#include <stdio.h>
//#include <math.h>
//#include <ctype.h>

int Strlen(char string[]){
    int index = 0;
    while(string[index] != '\0'){
        index++;
    }
    return index;
}

int main() {
    char string[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    printf("==Contador de letras==\nInsira 1 caracter para sair.\n");
    do{
        printf("Digite sua string:");
        scanf("%[^\n]", string);
        getchar();
        printf("Sua string possui: %i caracteres.\n", Strlen(string));
    }while(Strlen(string) != 1);
    return 0;
}