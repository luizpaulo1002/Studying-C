//Estudos C dia 1 (0 dias seguidos)

//Basic Exercicies

//Verificador de Números Primos

#include <stdio.h>

int main() {
    int num, i, divisores = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Não e primo.\n");
    } else {
        for (i = 1; i <= num; i++) {
            if (num % i == 0) divisores++;
        }
        
        if (divisores == 2) printf("O número %d e primo.\n", num);
        else printf("O numero %d nao e primo.\n", num);
    }

    return 0;
}