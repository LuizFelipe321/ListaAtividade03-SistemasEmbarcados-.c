#include <stdio.h>

int main() {

    int numeroAtomico, eletrons;

    printf("Digite o numero atomico: ");
    scanf("%d", &numeroAtomico);

    printf("Digite o numero de eletrons: ");
    scanf("%d", &eletrons);

    printf("%s\n",
          (numeroAtomico == eletrons) ? "Atomo neutro"
        : (numeroAtomico > eletrons) ?      "Cation (perdeu eletrons)"
        : "Anion (ganhou eletrons!)");

    return 0;
}
