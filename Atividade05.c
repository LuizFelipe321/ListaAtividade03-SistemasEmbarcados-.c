#include <stdio.h>

int main() {
float popuInicial, popuFinal, taxa;
int anos;

printf("Digite o valor da populacao inicial:");
scanf("%f", &popuInicial);

printf("Digite o valor da quantidade de anos: ");
scanf("%d", &anos);

printf("Digite o valor da taxa:");
scanf("%f", &taxa);

taxa = taxa / 100; //tirar a porcentagem e transforma-los em valores decimais

popuFinal = popuInicial + (popuInicial * taxa * anos);

  if (taxa > 0.02) {
    printf("Crescimento acelerado\n");
} else if (taxa == 0) {
    printf("Estavel\n");
} else if (taxa > 0) { // 2/100
    printf("crescimento moderado\n");
} else {
    printf("Declinio\n");
}

printf("Populacao final = %.2f + (%.2f * %.2f * %d)\n", popuInicial, popuInicial, taxa, anos);

printf("Populacao final = %.2f\n", popuFinal);

return 0;

}
