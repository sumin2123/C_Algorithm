#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() 
{
	int a, b;
	
	printf("��� ���? ");
	scanf("%d", &a);
	printf("%d���� ����ϰڽ��ϴ�.\n", a);

	for (b = 1; b < 10; b++)
	{
		printf("%d * %d = %d\n", a, b, a * b);
	}
	printf("\n");
	return 0;
}