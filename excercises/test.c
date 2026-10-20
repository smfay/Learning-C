#include <stdio.h>

int main(void) {
  int loops = 10;
  while (loops >= 1) {
    printf("\nI'm looping. Only %d left! ", loops - 1);
    loops -= 1;
  }
  printf("\nI'm done looping.");
  return 0;
}

/* this is my dope ass comment */
