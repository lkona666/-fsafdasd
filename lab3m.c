#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Rus");
    char str[81];//��������� ������ ��� �������� ������
    printf("������� ������ (�� 80 ��������): ");
    scanf("%s", &str);
    for (int i = 0; i<81; i++) {//�������� �� ������� ������� ������
        if (str[i] == 'a') str[i] = 'A';
        if (str[i] == 'b') str[i] = 'B';
    }
    printf("��������� ������: %s", str);
    return 0;
}