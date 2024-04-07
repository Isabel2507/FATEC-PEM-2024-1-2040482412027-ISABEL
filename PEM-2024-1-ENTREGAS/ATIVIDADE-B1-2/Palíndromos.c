
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM_MAX 100

int ehPalindromo(char str[], int inicio, int fim) {
    while (inicio < fim) {
        if (str[inicio] != str[fim])
            return 0;  
        inicio++;
        fim--;
    }
    return 1;
}

int ehIgnoravel(char palavra[]) {
    char *ignoraveis[] = {"o", "a", "os", "as", "um", "uma", "uns", "umas", "de", "da", "do", "das", "dos", "para", "por", "com", "ante", "após", "até", "com", "contra", "desde", "em", "entre", "para", "perante", "por", "sem sob", "sobre", "trás"};

    for (int i = 0; i < sizeof(ignoraveis) / sizeof(ignoraveis[0]); i++) {
        if (strcmp(palavra, ignoraveis[i]) == 0) {
            return 1;  
        }
    }

    return 0;  
}

void encontrarPalindromos(char frase[]) {
    int tamanho = strlen(frase);
    char palavra[TAM_MAX];
    int tamanhoPalavra = 0;

    
    for (int i = 0; i < tamanho; i++) {
        if (isalpha(frase[i])) {
            palavra[tamanhoPalavra++] = tolower(frase[i]);
        } else if (tamanhoPalavra > 0) {
            palavra[tamanhoPalavra] = '\0';
            if (!ehIgnoravel(palavra)) {
                printf("%s\n", palavra);
            }
            tamanhoPalavra = 0;
        }
    }
    if (tamanhoPalavra > 0) {
        palavra[tamanhoPalavra] = '\0';
        if (!ehIgnoravel(palavra)) {
            printf("%s\n", palavra);
        }
    }
}

int main() {
    char entrada[TAM_MAX];

    printf("Digite uma frase: ");
    fgets(entrada, sizeof(entrada), stdin);

   
    entrada[strcspn(entrada, "\n")] = '\0';

    encontrarPalindromos(entrada);

    return 0;
}


