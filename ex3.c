#include <stdio.h>

int main() {
    char pet[10];

    printf("Do you have a cat or a dog ? ");
    scanf("%s", pet);  // Kullanıcıdan girdi al

    if (pet[0] == 'c') {
        printf("Miyav!\n");
    } else if (pet[0] == 'd'){
        printf("Hav hav!\n");
    }

    return 0;
}
