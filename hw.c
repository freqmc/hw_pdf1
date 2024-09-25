#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	float u, r;
	setlocale(LC_ALL, "RUS");
	printf("Введите значения напряжения (в В) и сопротивления (в Ом):\n");
	scanf("%d %d", &u, &r);
	printf("Сила тока равна %.3f А", u/r);
}