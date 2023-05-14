#include "stdio.h"


int main(){

 double c, f, celc, far;
 char temperat;

 printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
 scanf("%c", &temperat);

 if (temperat == 'F') {
   printf("Digite a temperatura em Fahrenheit: ");
   scanf("%lf", &f);

    far = 5.0 / 9 (celc - 32);

   printf("Temperatura equivalente em Celsius: %.2lf", celc);
 }
 else if(temperat == 'C'){
   printf("Digite a temperatura em Celsius: ");
   scanf("%lf", &c);

   celc = 5 / 9 (far - 32);
   printf("Temperatura equivalente em Fahrenheit: %.2lf", far);
 }

return 0;
}
