#include <stdio.h>
 
int main() {
    printf("=========CHUONG TRINH CHUYEN DOI TIEN TE============\n");
    printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n");
	int number, money;
	printf("nhap don vi tien te ban muon chuyen doi(1-8): ");
	scanf("%d",&number);
	printf("moi ban nhap so tien can doi: ");
	scanf("%d",&money);
	switch(number) {
		case 1:
            printf("%d USD = %d VND",money,money * 23500);
            break;
        case 2:
            printf("%d EUR = %d VND ",money,money * 25000);
            break;
        case 3:
            printf("%d GBP = %d VND ",money,money * 28,000);
            break;
        case 4:
            printf("%d JPY = %d VND ",money,money * 180);
            break;
        case 5:
            printf("%d VND = %d USD ",money,money / 23500);
            break;
        case 6:
            printf("%d VND = %d EUR ",money,money / 25000);
            break;
        case 7:
            printf("%d VND = %d GBP ",money,money / 28000);
            break;
        case 8:
            printf("%d VND = %d JPY ",money,money / 180);
            break;       
        default:
            printf("moi ban nhap lai ");
    }
    
return 0;
}

