#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int enternumber()
 {
	printf("Please enter a number:\n");
	
	// Tao ra mot bien ten la " bat ky, o day l� val" de luu tru gia tri kieu so nguyen
	int val;
	//G�n gi� tri t�n val
	scanf("%i",&val);
	// nhap gia tri val
	if (val % 2 == 0){
		printf("even");
	} else { printf("odd");
	}
	
	return 0;
}
