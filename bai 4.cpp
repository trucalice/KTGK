#include<stdio.h>

int main() {
    int a, i;
    printf("Nhap a: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("So a phai lon hon 0\n");
        return 0;
    }

    printf("Cac uoc cua a la:\n");
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

