#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void main()
{
	int n, result;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);
	result = fact(n);
	printf("\n %d�� ���丮�� ���� %ld�Դϴ�.\n", n, result);
	getchar(); getchar();
}

long int fact(int n)
{
	int value;
	if (n <= 1)
	{
		printf("fact(1) �Լ� ȣ��!\n");
		printf("fact(1) �� 1 ��ȯ!!\n");
		return 1;
	}
	else {
		printf("\nfact(%d) �Լ� ȣ��!\n", n);
		value = (n * fact(n - 1));
		printf("fact(%d) �� %ld ��ȯ!!\n");
		return value;
	}
}