#include <stdio.h>

/* Exercise 1-14. Write a program to print a histogram
of the frequencies of different characters in its input. */

int main() {
  int c, i, j = 0;
  int chars[512];  // I DON'T CARE ANYMORE
  int counts[512]; // GIVE ME EVERYTHING

  printf("\nLet me give you the CHARACTERS and the FREQUENCY at which they "
         "occur... \n");

  for (i = 0; i < 512; ++i) {
    chars[i] = 0;
    counts[i] = 0;
  }

  for (i = 0; (c = getchar()) != EOF; ++i) {

    if (chars[c] == c) {
      ++counts[c];
    } else if (chars[c] == 0) {
      chars[c] = c;
    }
  }

  printf("\n\nhere u go...\n");

  for (i = 0; i < 512; ++i) {
    if (chars[i] != 0) {
      printf("\n| %c | ", chars[i]);
      for (j = 0; j <= counts[i]; ++j) {
        printf("#");
      }
    }
  }
}

// TESTING SEQUENCE

// It is a long established fact that a reader
// will be distracted by the readable content
// of a page when looking at its layout.
// The point of using Lorem Ipsum is that it
// has a more-or-less normal distribution of letters,
// as opposed to using 'Content here, content here',
// making it look like readable English.
