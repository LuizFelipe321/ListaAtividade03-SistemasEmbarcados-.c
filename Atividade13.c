#include <stdio.h>
#include <math.h>

int main() {

float velocidadeInicial, aceleracaoConst, tempoMovimento, velocidadeFinal;

printf("Escreva a velocidade inicial do objeto:");
scanf("%f", &velocidadeInicial);


printf("Escreva a aceleracao constante do objeto:");
scanf("%f", &aceleracaoConst);

printf("Escreva o tempo de movimento");
scanf("%f", &tempoMovimento);

velocidadeFinal = velocidadeInicial + aceleracaoConst * tempoMovimento;

if (velocidadeFinal > velocidadeInicial) {
    printf("Movimento Acelerado.\n");
} else if (velocidadeFinal < velocidadeInicial) {
    printf("Movimento retardado.\n");
} else {
    printf("Movimento Uniforme.\n");
    }

    printf("Velocidade final: %.2f\n", velocidadeFinal);

    return 0;

}
