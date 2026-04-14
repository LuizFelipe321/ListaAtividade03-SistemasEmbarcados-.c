#include <stdio.h>
#include <math.h>

int main() {

double valorX, y;

/*𝑦 = 𝑓(𝑥) = {
−1, se 𝑥 < 0
2𝑥, se 0 ≤ 𝑥 < 2
𝑥2 − 1, se 2 ≤ 𝑥 ≤ 4
√𝑥, se 𝑥 > 4*/

 printf("Entre com o valor de 'x':");
 scanf("%lf", &valorX);

if ( valorX < 0) {
    y = -1;
} else if (0 < valorX && valorX < 2) {
    y = 2 * valorX;
} else if (2 <= valorX && valorX <= 4) {
    y = pow(valorX, 2) - 1;
} else {
    y = sqrt(valorX);
}

printf("y = %.2lf\n", y );

  return 0;

}
