#include <stdio.h>

int Atividade01() {

int operadorIdentificador, nivel;

    printf("Digite o identificador de operador entre 1000 a 9999:");
    scanf("%d", &operadorIdentificador);

    printf("Digite um nivel entre 1 a 3:");
    scanf("%d", &nivel);

    if (operadorIdentificador < 1000 || operadorIdentificador > 9999) {
    printf("Identificador invalido\n");
}

    if (nivel < 1 || nivel > 3) {
    printf("Voce digitou um nivel que nao existe!\n");
}

    if (operadorIdentificador < 1000 || operadorIdentificador > 9999) {
        printf("Acesso negado. Voce digitou um operador identificador errado!\n");
        
          } else {
              
              if (nivel == 1) {
              printf("nivel basico\n");
          }   else if (nivel == 2) {
              printf("nivel tecnico\n");
          }   else if (nivel == 3) {
              printf ("nivel Total!\n");
          }   else {
              printf ("Voce digitou um nivel invalido.");
          }
          
    }

return 0;

}
