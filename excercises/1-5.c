#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main() {
  float fahr, celsius;
  float lower, upper, step;
  int col_width = 10;
  int cols = 2;

  lower = 0;   /* lower limit of temperatuire scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = upper;
  printf("Behold The Coolest Fucking Chart Ever Made:\n\n");
  printf("%10s", "Fahrenheit");
  printf("%10s", "Celsius");
  printf("\n");
  int hr_length = col_width * cols;
  while (hr_length > 0) {
    printf("-");
    hr_length -= 1;
  }
  printf("\n");

  while (fahr >= lower) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.1f%10.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
}
