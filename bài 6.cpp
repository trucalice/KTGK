#include<stdio.h>
#include<math.h>

int main() {
    int a, count = 0, num = 2;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Vui long nhap mot so nguyen duong lon hon 0.\n");
        return 0;
    }
    printf("Cac so nguyen to dau tien la:\n");
    for (count = 0; count < a; num++) {
        int isPrime = 1;     
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) { 
                isPrime = 0;    
                break;        
            }
        }     
        if (isPrime) {
            printf("%d ", num);
            count++;
        }
    }
    printf("\n");
    return 0;
}

