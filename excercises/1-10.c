#include <stdio.h>

/* confused by the wording on this one a little */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\b') {
      printf("\\b");
    } else if (c == '\t') {
      printf("\\t");
    } else {
      putchar(c);
    }
  }
}
