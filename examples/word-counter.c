#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
int main() {
  int c, nl, nw, nc, state; // declare the vars

  state = OUT;      // actually state machine, outside of a word by default
  nl = nw = nc = 0; // I guess you can do this, kinda cool
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') // we could just remove this
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t') // delimeters
      state = OUT;
    else if (state == OUT) { // state only changes state if we are already out
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
