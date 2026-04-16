
#include <stdio.h>
#include <math.h>

int main() {

int velocidade, raioCurva, limiteAceleracao = 90;
double forcaCentripeta;

printf("Escreva a velocidade do veículo:");
scanf("%d", &velocidade);

printf("Escreva o raio da curva:");
scanf("%d", &raioCurva);

forcaCentripeta = pow(velocidade, 2) / raioCurva;

printf("resultado forca centripeta: %.2lf", forcaCentripeta);

if (forcaCentripeta > limiteAceleracao) {
    printf("Risco!\n");
} else {
      printf("Velocidade dentro dos conformes!\n");
      }

      printf("Limite permitido: %.2lf\n", limiteAceleracao);
      
return 0;

}
