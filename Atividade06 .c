#include <stdio.h>

int main() {

double salario, parcela;

printf("Salario do cliente:");
scanf("%lf", &salario);

printf("Qual o valor da parcela de financiamento?");
scanf("%lf", &parcela);


if (parcela > salario * 0.3) { //30%   30/100---> 0.3
    printf("Reprovado!\n");
} else {
    printf("Aprovado!\n");
}

printf("30%% do salario: %.2lf\n", salario * 0.3);

return 0;

}
