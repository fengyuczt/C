#include "stdio.h"

// 降序排序(选择排序)
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

// 升序排序(选择排序)
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

// 是不是质数
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

// 是不是偶数
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

// 是不是闰年
int leap_year(int year)
{
	if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		return 1;
	} else {
		return 0;
	}
}

// 大写字母转小写字母
char B_letter(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
	{
		return letter + 32;
	} else {
		printf("请检查是否是大写字母");
	}
}

// 小写字母转大写字母
char S_letter(char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return letter - 32;
	} else {
		printf("请检查是否是小写字母");
	}
}

// 是否为水仙花数
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
		printf("不是数字或不是三位数以内\n");
	}
	return 0;
}

// 是否为完数
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

// 数组中最大值
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

// 数组中最小值
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