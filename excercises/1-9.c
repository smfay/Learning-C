#include <stdio.h>

/* blank limiter */

int main() {
  int c, wasBlank;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (wasBlank == 0) {
        putchar(c);
      }
      wasBlank = 1;
    } else {
      putchar(c);
      wasBlank = 0;
    }
  }
}
