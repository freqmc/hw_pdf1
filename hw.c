#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	float u, r;
	setlocale(LC_ALL, "RUS");
	printf("������� �������� ���������� (� �) � ������������� (� ��):\n");
	scanf("%d %d", &u, &r);
	printf("���� ���� ����� %.3f �", u/r);
}