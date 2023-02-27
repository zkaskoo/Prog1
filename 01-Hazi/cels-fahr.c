#include <stdio.h>

/* Fahrenheit-fok-Celsius-fok táblázat kiírása
F = 0, 20, ..., 300 Fahrenheit-fokra */
main()
{
   int fahr, celsius;
   int also, felso, lepes;
   also = 0;      /* a táblázat alsó határa */
   felso = 300;   /* a táblázat felső határa */
   lepes = 20;    /* a táblázat lépésköze */

   fahr = also;
   while (fahr <= felso) {
      celsius = 5 * (fahr-32) / 9;
      printf("%d\t%d\n", fahr, celsius);
      fahr = fahr + lepes; 
   }
}