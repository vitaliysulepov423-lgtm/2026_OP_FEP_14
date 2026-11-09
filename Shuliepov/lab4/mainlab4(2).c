#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main(void) {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int x;
	int* p = &x;

	printf("Введіть ціле число: ");
	scanf("%d", &x);

		printf("Адреса змінної x (&x): %p\n", (void*)&x);
		printf("Значення змінної p %p\n %d\n", (void*)p);
		printf("Значення через вказівник (p*): %d\n", *p);
	
	return 0;
}