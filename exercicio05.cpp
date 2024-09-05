#include<stdio.h>
#include<stdlib.h>

int main(void){
	char string[30];
	char string_invertido[30];
	int j=0, tamanho = 0;;
	
	printf("Digite algo: ");
	fgets(string, sizeof(string), stdin);
	
	
    while (string[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = tamanho - 1; i >= 0; i--) {
        string_invertido[j++] = string[i];
    }
    string_invertido[j] = '\0';

    printf(" %s\n", string_invertido);
}