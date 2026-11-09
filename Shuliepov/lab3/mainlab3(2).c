#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define MAX 30
int main(void) {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	char surname[MAX][30];
	char email[MAX][40];
	char color[MAX][20];
	int n;
	printf("Скільки Студентів у списку (1-%d)?");
	scanf("%d", &n);
	if (n < 1 || n > MAX) {
		printf("Некоректна кількість студентів\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("Студент %d:\n", i + 1);
		printf("Прізвище: ");
		scanf("%s", surname[i]);
		printf("Email: ");
		scanf("%s", email[i]);
		printf("Улюблений колір: ");
		scanf("%s", color[i]);
		for (int i = 0; i < n; i++) {

		}
	}


	return 0;
}