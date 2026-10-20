#include <stdio.h>

int main() {
  int ongoing;
  ongoing = getchar() != EOF;

  while (ongoing) {
    printf("%d\n", ongoing);
    ongoing = getchar() != EOF;
  }
  printf("%d", ongoing);
}

/* took me way too long to figure
out how the 0 gets printed */
