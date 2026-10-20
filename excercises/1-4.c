#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main() {
  float fahr, celsius;
  float lower, upper, step;
  int col_width = 12;
  int cols = 2;

  lower = 0;   /* lower limit of temperatuire scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  celsius = lower;
  printf("Behold The NEW Coolest Fucking Chart Ever Made:\n\n");
  printf("%12s", "Celsius");
  printf("%12s", "Fahrenheit");
  printf("\n");
  int hr_length = col_width * cols;
  while (hr_length > 0) {
    printf("-");
    hr_length -= 1;
  }
  printf("\n");

  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5) + 32.0;
    printf("%12.1f%12.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
