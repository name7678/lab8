#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void monthF(int t) {
	switch (t) {
	case 0:
		printf("Сейчас январь\n");
		break;
	case 1:
		printf("Сейчас февраль\n");
		break;
	case 2:
		printf("Сейчас март\n");
		break;
	case 3:
		printf("Сейчас апрель\n");
		break;
	case 4:
		printf("Сейчас май\n");
		break;
	case 5:
		printf("Сейчас июнь\n");
		break;
	case 6:
		printf("Сейчас июль\n");
		break;
	case 7:
		printf("Сейчас август\n");
		break;
	case 8:
		printf("Сейчас сентябрь\n");
		break;
	case 9:
		printf("Сейчас октябрь\n");
		break;
	case 10:
		printf("Сейчас ноябрь\n");
		break;
	case 11:
		printf("Сейчас декабрь\n");
		break;
	default:
		printf("неизвестный месяц\n");
	}

}

int main() {
	setlocale(LC_ALL, "RU_ru.UTF-8");
	int n, d, t;
	printf("Введите количество прошедших месяцов: ");
	scanf("%d", &n);
	printf("Введите количество прошедших дней: ");
	scanf("%d", &d);
	printf("Прошло: %d месяцов и %d дней\n", n, d);
	t = n % 12;
	monthF(t);
	system("pause");
	return 0;
}