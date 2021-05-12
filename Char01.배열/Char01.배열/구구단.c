#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() 
{
	int a, b;
	
	printf("몇단 출력? ");
	scanf("%d", &a);
	printf("%d단을 출력하겠습니다.\n", a);

	for (b = 1; b < 10; b++)
	{
		printf("%d * %d = %d\n", a, b, a * b);
	}
	printf("\n");
	return 0;
}