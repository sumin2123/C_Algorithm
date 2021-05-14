#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void main()
{
	int n, result;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	result = fact(n);
	printf("\n %d의 팩토리얼 값은 %ld입니다.\n", n, result);
	getchar(); getchar();
}

long int fact(int n)
{
	int value;
	if (n <= 1)
	{
		printf("fact(1) 함수 호출!\n");
		printf("fact(1) 값 1 반환!!\n");
		return 1;
	}
	else {
		printf("\nfact(%d) 함수 호출!\n", n);
		value = (n * fact(n - 1));
		printf("fact(%d) 값 %ld 반환!!\n");
		return value;
	}
}