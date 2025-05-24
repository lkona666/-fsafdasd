#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_NUM(arr,n,result){\
	result=arr[0];\
	for (int i=0;i<(n);i++){\
		if (arr[i]>result){\
		result=arr[i];\
		}\
	}\
}
int main(){
	setlocale(LC_ALL,"Rus");
	char input[52];// хранение строки введеной пользователем
	char numbers[10];
	int schetchik = 0;
	printf("Введите числа: ");
	fgets(input,52,stdin)// stdin это поток ввода, то есть клавиатура, input сам массив, 52 - saint размер массива
	//fgets считывает весь текст введеный с клавиатуры
}

//макрос для поиска максимума, принимает массив чисел и количество элементов