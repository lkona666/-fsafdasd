#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Rus");
    char str[81];//Объявляем массив для хранения строки
    printf("Введите строку (до 80 символов): ");
    scanf("%s", &str);
    for (int i = 0; i<81; i++) {//Проходим по каждому символу строки
        if (str[i] == 'a') str[i] = 'A';
        if (str[i] == 'b') str[i] = 'B';
    }
    printf("Изменённая строка: %s", str);
    return 0;
}