#include <stdio.h>
//#include <math.h>
//#include <ctype.h>

//Ideia é fazer um index que incrementa a cada verificação do loop enquanto ele não encontrar o \0

int Strlen(char string[]){
    int index = 1;
    for(int i = 0; i < index; i++){
        if(string[i] != "\0"){
            index++;
        }else{
            break;
        }
    }
    return index - 1;
}

int main() {
    char string[] = "bucetasso da taiga";
    printf("Contador de letras, digite sua string!\n");
    scanf("%s", string);
    printf("Sua string possui: " + Strlen(string));
    return 0;
}