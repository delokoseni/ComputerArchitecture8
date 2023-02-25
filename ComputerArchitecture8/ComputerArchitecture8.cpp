#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 8, a[8], i;
	for (i = 0; i < n; i++) {
		printf("Введите a[%d%s", i, "]: ");
		scanf("%d", &a[i]);
	}
	_asm {

	}
	return 0;
}
