#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int myNum, yourNum;
    int guessCount = 0;
    int maxGuesses = 2;

    srand(time(NULL));
    myNum = 1 + rand() % 10;

    while (guessCount < maxGuesses) {
        scanf("%d", &yourNum);
        guessCount++;

        if (yourNum == myNum) {
            printf("Correct!\n");
            return 0;
        } else if (yourNum < myNum) {
            printf("Your guess was too small.\n");
        } else {
            printf("Your guess was too large.\n");
        }

        if (guessCount < maxGuesses) {
            printf("Remaining guesses: %d\n", maxGuesses - guessCount);
        }
    }

    printf("Thua. The correct number was %d.\n", myNum);

    return 0;
}