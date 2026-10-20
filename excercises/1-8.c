#include <stdio.h>

/* an edit to the line counter example
to make it count blanks (spaces?????? I dunno man) and tabs */

int main() {
  int c, newlines, tabs, blanks;

  newlines = 0;
  blanks = 0;
  tabs = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++newlines;
    }
    if (c == '\t') {
      ++tabs;
    }
    if (c == ' ') {
      ++blanks;
    }
  }
  printf("Newlines: %d\n", newlines);
  printf("Blanks: %d\n", blanks);
  printf("Tabs: %d\n", tabs);
}
