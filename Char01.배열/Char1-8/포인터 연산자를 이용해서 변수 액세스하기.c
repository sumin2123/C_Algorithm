#include <stdio.h> 

void main() {
	int i = 10, j = 20;
	int* ptr;
	printf("i의 값 = %d\nj의 값 = %d\n", i, j);
	printf("i의 메모리 자수(&i) = %u\n",&i);
	printf("j의 메모리 자수(&j) = %u\n\n",&j);

	ptr = &i;

	printf("<< ptr=&i 실행 >>\n");
	printf("ptr의 메모리 주소(&ptr) = %u\n", &ptr);
	printf("ptr의 값(ptr) = %u\n", ptr);
	printf("ptr의 참조값(*ptr) = %u\n\n", *ptr);

	printf("<< i = *ptr실행 >>\n");
	printf("i의 값 = %d", i);


	getchar();
}