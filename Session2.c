#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	printf("Nhap so nguyen a =");
	scanf("%d",&a);
	printf("Nhap so nguyen b =");
	scanf("%d",&b);
	printf("Tong cua %d va %d là: %d\n", a, b, a+b);
	printf("Hieu cua %d va %d là: %d\n", a, b, a-b);
	printf("Tich cua %d va %d là: %d\n", a, b, a*b);
	printf("Thuong cua %d va %d là: %d\n", a, b, a/b);
	return 0;
}
