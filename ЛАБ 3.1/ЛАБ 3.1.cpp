// ЛАБ 3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <clocale>
#include <random>




int search(int* line, int N, int lineNumber)
{
    int maxa = 0;

    for (int j = lineNumber; j < N; j++) {
        if (maxa < abs(line[j])) {
            maxa = abs(line[j]);
        }
    }
    return maxa;
}

int main()
{
    srand(time(NULL));
    int N, Z=0;
    N = rand() % 3 + 5;
    int** a;
    a = new int* [N];    // массив указателей (2)
    for (int i = 0; i < N; i++) {   // (3)
        a[i] = new int[N];     // инициализация указателей
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = rand() % 21 - 10;
            std::cout << a[i][j] << "\t";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < N; i++) {
        std::cout << "Returned max= " << search(a[i], N, i) << std::endl;
    }
    return 0;
}


