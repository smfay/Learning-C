#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

// The input '1 2' by itself returns 0 for nl, nw, and nc.
int main() {
  int c, nl, nw, nc, state, stateChanges, loopsRan;

  state = OUT; // we are outside the word by default
  nl = nw = nc = stateChanges = loopsRan = 0; // words init at 0

  while ((c = getchar()) != EOF) { // never runs, it must be false
    ++nc;

    if (state == OUT) {
      state = IN;
      ++stateChanges;
      ++nw;
    } else if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      ++stateChanges;
    }

    ++loopsRan;
  }

  printf("\n\nnewlines: %d words: %d chars: %d", nl, nw, nc);
  printf("\nState changed %d times", stateChanges);
  printf("\nLooped %d times", loopsRan);
}

// I'm not sure the fix, but single line inputs without a \n never run the loop.
// I'm kinda lost on this one, moving on
