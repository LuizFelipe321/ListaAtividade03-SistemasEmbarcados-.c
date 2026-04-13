#include <stdio.h>

int main(){
    float peso, altura, calculoImc;

    printf("Qual a sua altura?\n");
    scanf("%f", &altura);

    printf("Qual o seu peso?\n");
    scanf("%f", &peso);

    calculoImc = peso / (altura * altura);

    if (calculoImc < 18.5) {
        printf("Abaixo do peso\n");
  } else if (calculoImc < 24.9) {
        printf("Peso normal\n");
  } else if (calculoImc < 29.9) {
        printf("Sobrepeso\n");
  } else {
        printf("Acima do peso, Obesidade\n");
  }

    printf("Peso: %.2f Altura: %.2f valor IMC: %.2f\n", peso, altura, calculoImc);

    return 0;
}
