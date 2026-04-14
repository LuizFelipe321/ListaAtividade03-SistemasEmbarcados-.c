#include <stdio.h>

int main(void) {

double num1, num2, resultado;
char opcoes;

printf("Digite dois valores do conjunto dos reais:");
scanf("%lf %lf", &num1, &num2);
printf("Menu\n Digite as seguintes opcoes de operacoes matematica:\n subtracao = - \n adicao = + \n divisao = / \n multiplicacao = *\n");
scanf(" %c", &opcoes);

switch(opcoes)
    {
case '+':
    resultado = num1 + num2;
    printf("Resultado: %.2lf\n", resultado);
    break;
case '-':
    resultado = num1 - num2;
    printf("Resultado: %.2lf\n", resultado);
    break;
case '*':
    resultado = num1 * num2;
    printf("Resultado: %.2lf\n", resultado);
    break;
case '/':
    if (num2 == 0) {
        printf("Erro: Divisao por zero!\n");
    } else {
         resultado = num1 / num2;
         printf("Resultado: %.2lf\n", resultado);
    }
    break;

default:
    printf("Voce escreveu um operador invalido!\n");
    break;
    }
    return 0;
}

