#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	void print_binary(unsigned int n) {
		int bit = 0;
		int started = 0;
		for (int i = 31; i >= 0; i--) {
			int bit = (n >> i) & 1;
			if (bit || started || i == 0) {
				printf("%d", bit);
				started = 1;
				printf("\n");
			}
		}
	}
		int int_val = 2026;
		double float_val = 123.456768;
		char char_val = 'A';
		char str_val[] = "Тест рядок";
		int* ptr_val = &int_val;
		printf("Десятковий: %d\n", int_val);
		printf("Вісімковий: %o\n", int_val);
		printf("Шістнадцятковий: %x\n", int_val);
		printf("Двійковий: ");
		print_binary((unsigned int)int_val);
		printf("\n");
		printf("Плаваюча кома (f): %f\n", float_val);
		printf("Експоненційна (e): %e\n", float_val);
		printf("Гнучкий формат: %g\n", float_val);
		printf("\n");
		printf("Символ: %c\n", char_val);
		printf("Рядок: %s\n", str_val);
		printf("Вказівник: %p\n", (void*)ptr_val);

		return 0;



	}

}