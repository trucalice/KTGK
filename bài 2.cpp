#include <stdio.h>
 
int main() {
    int time;
    printf("Nhap so gio lam viec trong thang: ");
	scanf("%d",&time);
    long long wage;
    printf("nhap muc luong theo gio: ");
    scanf("%lld",&wage);
    if (time > 160) {
        printf("tong tien luong: %.0f", time * wage * 1.1);
	}
	else {
		printf (" tong tien luong: %d", time * wage);
	}
    
    return 0;
}
