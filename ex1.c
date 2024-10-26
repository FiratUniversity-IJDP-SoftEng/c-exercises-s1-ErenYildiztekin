#include <stdio.h>

int main() {
    int secretNumber = 3;
    int guess;

    printf("1 ile 5 arasında bir sayı tahmin edin: ");
    scanf("%d", &guess);  // Kullanıcıdan tahmini al

    if (guess == secretNumber) {
        printf("Tebrikler! Doğru tahmin.\n");
    } else {
        printf("Maalesef, yanlış tahmin. Doğru cevap %d idi.\n", secretNumber);
    }
    return 0;
}
