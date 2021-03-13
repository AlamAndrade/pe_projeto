#include <stdio.h>
#include <string.h>

void forca(int vidas);
void print_palavra(char *palavra, char teste);

int main()
{
    forca(2);
    

    return 0;
}

void forca(int vidas){
    printf("%s\n", "|---|");
    if(vidas == 6){
        printf("|\n|\n|\n|\n");
    }
    if(vidas == 5){
        printf("%s\n", "|   O");
        printf("|\n|\n|\n");
    }
    else if(vidas == 4){
        printf("%s\n", "|   O");
        printf("%s\n", "|  /");
        printf("|\n|\n");
    }
    else if(vidas == 3){
        printf("%s\n", "|   O");
        printf("%s\n", "|  /|");
        printf("|\n|\n");
    }
    else if(vidas == 2){
        printf("%s\n", "|   O");
        printf("%s\n", "|  /|\\");
        printf("|\n|\n");
    }
    else if(vidas == 1){
        printf("%s\n", "|   O");
        printf("%s\n", "|  /|\\");
        printf("%s\n", "|  /  ");
        printf("|\n");
    }
    else if(vidas == 0){
        printf("%s\n", "|   O");
        printf("%s\n", "|  /|\\");
        printf("%s\n", "|  / \\");
        printf("|\n");
    }
    printf("%s\n", "|_________");
}


void print_palavra(char *palavra, char teste){
    int len = (int) strlen(palavra);
    char acertos[len];
    
    for(int i=0; i<len; i++){
        if(palavra[i] == teste){
            acertos[i] = teste;
        }
        else{
            acertos[i] = '_';
        }
    }
    printf("%s", acertos);
}
