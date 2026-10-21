#include <stdio.h>

/* Exercise 1-13. Write a program to print
a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars
horizontal; a vertical orientation is more challenging.*/

int main() {
  int c, i, j, increment;
  int range = 10;
  int lengths[range];

  i = j = increment = 0;

  for (i = 0; i < range; ++i) {
    lengths[i] = 0;
  }

  for (i = 0; (c = getchar()) != EOF; ++i) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (increment > 0) {
        if (increment >= range) {
          increment = range - 1;
        }
        ++lengths[increment];
      }
      increment = 0;
    } else {
      ++increment;
    }
  }

  printf("\n\nTHE OCCURENCE OF THE LENGTHS OF WORDS\n");
  printf("DISPLAYED IN AN INREASING WAY:\n");

  for (i = 1; i < range; ++i) {
    printf("%d: ", i);
    for (j = 0; j < lengths[i]; ++j) {
      printf("#");
    }
    printf("\n");
  }
}
