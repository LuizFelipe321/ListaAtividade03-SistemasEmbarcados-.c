#include <stdio.h>

int main() {
    int FreqCardiaca, idade;

    printf("Qual a frequencia cardiaca do paciente(em bpm):");
    scanf("%d", &FreqCardiaca);

    printf("Qual a idade do paciente?");
    scanf("%d", &idade);


/*Criança (idade até 12)
Normal: 70–120
atencao: 60-70 ou se atender 121-140
critico: valor < que 59 e valor > que 141

Adulto (idade ate 13–59)
Normal: 60–100
atencao: 50-59 ou se atender 100-130
Critico: valor < que 50 e valor > que 131

Idoso (idade 60+)
Normal: 60–90
atencao: 50-59 ou se atender 90-120
Crítico: valor < que 49 e valor > 121
*/

//crianca
if (idade <= 12) {
    if (FreqCardiaca >= 70 && FreqCardiaca <= 120){
        printf("Normal\n");
    } else if((FreqCardiaca >= 60 && FreqCardiaca <= 70) || (FreqCardiaca > 120 && FreqCardiaca <= 140)) {
        printf("Atencao\n");
    } else {
        printf("Crítico\n");
    }

//Adulto
} else if (idade <= 59) {
    if (FreqCardiaca >= 60 && FreqCardiaca < 100) {
        printf("Normal\n");
    } else if((FreqCardiaca >= 50 && FreqCardiaca <= 59) || (FreqCardiaca >= 100 && FreqCardiaca <= 130)) {
        printf("Atencao!\n");
    } else {
        printf("Critico\n");
    }

//idoso
} else {
    if (FreqCardiaca >= 60 && FreqCardiaca <= 90) {
        printf("Normal\n");
    } else if ((FreqCardiaca >= 50 && FreqCardiaca <= 59) || (FreqCardiaca >= 90 && FreqCardiaca <= 120)) {
        printf("Atencao\n");
    } else {
        printf("critico\n");
    }
  }

  return 0;
}
