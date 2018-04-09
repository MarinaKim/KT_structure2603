#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include<stdlib.h>
#include"Header.h"

using namespace std;


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int n;

	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &n);
		cin.get();
		switch (n) {
			//Поля структуры: Фамилия,Возраст,	Количество игр,	Количество заброшенных шайб
			//Определить средний возраст хоккеистов и вывести сведения о хоккеистах, возраст которых меньше 25 лет

		case 1: {
			int count = 5;
			hockey *player = NULL;
			player = (hockey*)malloc(count * sizeof(hockey));
			if (player != 0)
			{
				for (int i = 0;i < count; i++)
				{
					(player + i)->name = (char*)malloc(12 * sizeof(char));
					generateName((player + i)->name);

					(player + i)->age = (age*)malloc(12 * sizeof(age));
					generateAge((player + i)->age);

				
					(player + i)->game = (int*)malloc(sizeof(int));
					(player + i)->game = 1 + rand() % 5;

					
					(player + i)->puck = (int*)malloc(sizeof(int));
					(player + i)->puck = (1 + rand() % 10);

					printf(" player %d \t %s \t %2d.%2d.%4d \t %d \t (%d) \n", i + 1, (player + i)->name, (player + i)->age->day, (player + i)->age->month, (player + i)->age->year, (player + i)->game, (player + i)->puck);
				}

				
			}


		}break;
		}
	} while (n > 0);
}

