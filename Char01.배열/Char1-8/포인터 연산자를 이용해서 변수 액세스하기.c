#include <stdio.h> 

void main() {
	int i = 10, j = 20;
	int* ptr;
	printf("i�� �� = %d\nj�� �� = %d\n", i, j);
	printf("i�� �޸� �ڼ�(&i) = %u\n",&i);
	printf("j�� �޸� �ڼ�(&j) = %u\n\n",&j);

	ptr = &i;

	printf("<< ptr=&i ���� >>\n");
	printf("ptr�� �޸� �ּ�(&ptr) = %u\n", &ptr);
	printf("ptr�� ��(ptr) = %u\n", ptr);
	printf("ptr�� ������(*ptr) = %u\n\n", *ptr);

	printf("<< i = *ptr���� >>\n");
	printf("i�� �� = %d", i);


	getchar();
}