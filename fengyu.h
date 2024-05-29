#include "stdio.h"

// ��������(ѡ������)
void down_sort(int arr[], int Long) {
    int max, s = 0;
    for (int i = 0; i < Long; i++) {
        max = i;
        for (int j = i + 1; j < Long; j++) {
            if (arr[max] < arr[j]) {
                max = j;
            }
        }
        s = arr[max];
        arr[max] = arr[i];
        arr[i] = s;
    }
}

// ��������(ѡ������)
void up_sort(int arr[], int Long) {
    int min, s = 0;
    for (int i = 0; i < Long; i++) {
        min = i;
        for (int j = i + 1; j < Long; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        s = arr[min];
        arr[min] = arr[i];
        arr[i] = s;
    }
}

// �ǲ�������
int pn(int number)
{
	int x = number / 2;
	for(int i = 2; i < x; i++){
		if(number % i == 0){
			return 0;
		}
	}
	return 1;
}

// �ǲ���ż��
int even(int number)
{
	if (number % 2 == 0)
	{
		return 1;
	} else
	{
		return 0;
	}	
}

// �ǲ�������
int leap_year(int year)
{
	if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		return 1;
	} else {
		return 0;
	}
}

// ��д��ĸתСд��ĸ
char B_letter(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
	{
		return letter + 32;
	} else {
		printf("�����Ƿ��Ǵ�д��ĸ");
	}
}

// Сд��ĸת��д��ĸ
char S_letter(char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return letter - 32;
	} else {
		printf("�����Ƿ���Сд��ĸ");
	}
}

// �Ƿ�Ϊˮ�ɻ���
int N_number(int number)
{
	if(number >= 0 && number <= 999){
		int g, s, b;
		g = s = b = 0;
		g = number % 10;
		s = number / 10 % 10;
		b = number / 100;
		if(g * g * g + s * s * s + b * b * b == number) {
			return 1;
		}
	} else {
		printf("�������ֻ�����λ������\n");
	}
	return 0;
}

// �Ƿ�Ϊ����
int P_number(int number)
{
	int s = 0;
	for (int i = 1; i <= number / 2; i++) {
		if(number % i == 0){
			s += i;
		}
	} 
	if (s == number) {
		return 1;
	} else {
		return 0;
	}
}

// ���������ֵ
int B_sort(int arr[], int Long)
{
	int max = arr[0];
	for (int i = 0; i < Long; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

// ��������Сֵ
int S_sort(int arr[], int Long)
{
	int min = arr[0];
	for (int i = 0; i < Long; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}