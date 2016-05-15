#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // declare variables and seed rand func
  int guess = 0;
  srand (time(NULL));
  int answer = rand() % 101;

  // get initial guess
  printf("Guess a number between 1 and 100!\n");
  scanf("%i", &guess);

  // while guess is incorrect, ask for new guess 
  while (guess != answer)
  {
    if (guess < 0 || guess > 100) {
      printf("Guess a number between 1 and 100!\n");
    }
    else if (guess > answer) {
      printf("Lower!\n");
    }
    else if (guess < answer) {
      printf("Higher!\n");
    }
    scanf("%i", &guess);
  }
  printf("You're correct! The answer is %i\n", answer);

  return 0;
}
