#include <stdio.h>
#include <math.h>

int main() {

int tensao, tensaoRede, diferencaAbsoluta, doisNumeros;

printf("digite a tensao do equipamento e a tensao da rede eletrica:");
doisNumeros = scanf("%d %d", &tensao, &tensaoRede);


if (doisNumeros != 2) {
    printf("Erro! Algum valor foi digitado com caractere nao permitido. Digite apenas numeros\n");
} else {

    diferencaAbsoluta = fabs(tensao - tensaoRede);

    if (diferencaAbsoluta <= 10) {
        printf("O equipamento é compativel\n");
    } else {
        printf("Incompatibilidade\n");
    }

    printf("%d", diferencaAbsoluta);

    }

return 0;
}
