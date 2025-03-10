#include <stdio.h>
//#include <math.h>
//#include <ctype.h>

//Ideia é fazer um index que incrementa a cada verificação do loop enquanto ele não encontrar o \0

char Strlen(char string[]){
    int index = 1;
    for(int i = 0; i < index; i++){
        if(string[i] != '\0'){
            index++;
        }else{
            break;
        }
    }
    return index -1;
}

int main() {
    char string[] = "a";
    printf("Contador de letras!\nDigite sua string:\n");
    scanf("%s", string);
    //int verif = Strlen(string);
    printf("Sua string possui: %i caracteres.", Strlen(string));
    return 0;
}