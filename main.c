#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Функция для вывода числа в бинарном формате с тире каждые 4 бита
void bin(unsigned int num) {

	// Определяем количество битов для типа int
	int bits = sizeof(num) * CHAR_BIT; // 4 * 8 = 32
	for (int i = bits - 1; i >= 0; i--) {
		putchar((num & (1u << i)) ? '1' : '0');

		// Добавляем тире после каждых 4 бит, кроме последней группы
		if (i % 4 == 0 && i != 0) {
			putchar('-');
		}
	}
}

int main() {
	unsigned int a = 7; // Пример числа
	bin(a);
	printf("\n"); // 0000-0000-0000-0000-0000-0000-0000-0111
	bin(~a);
	printf("\n"); // 1111-1111-1111-1111-1111-1111-1111-1000

	return 0; 
}