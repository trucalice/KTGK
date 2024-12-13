#include<stdio.h>
#include<math.h>

int main() {
    int a, i,isPrime = 1;
    printf("Nhap a: ");
    scanf("%d", &a);

    if (a < 2){
        	printf("%d khong phai so nguyen to\n",a);
        return 0;
    }  
    for (i = 2; i <= sqrt(a); i++) {
        if (a % i == 0 ) {
            isPrime = 0;
            break;
        }
    }
        if (isPrime)
        printf("%d la so nguyen to\n", a);
    else
        printf("%d khong phai so nguyen to\n", a);


    return 0;
}

