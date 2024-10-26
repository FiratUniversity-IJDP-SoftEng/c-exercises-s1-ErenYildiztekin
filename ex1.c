#include <stdio.h>

int main() {
    int secretNumber = 3;
    int guess;

    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);  

    if (guess == secretNumber) {
        printf("Congratulations.It is true.\n");
    } else {
        printf("Unfortunately, wrong guess. correct answer was %d.\n", secretNumber);
    }
    return 0;
}
