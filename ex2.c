#include <stdio.h>

int main() {
    int age;

    printf("Yaşınızı girin: ");
    scanf("%d", &age);  

    for (int i = 0; i < age; i++) {
        printf("Happy Birthday!\n");
    }

    return 0;
}
