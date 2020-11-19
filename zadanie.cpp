#define _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include "time.h"
#include "iostream"
#include "conio.h"
#include "ctime"
using namespace std;

using namespace std;

const int n = 4;
const int m = 4;

int iArr[n][m] = { 0, 0, 1, 0,
0, 1, 1, 0,
1, 0, 0, 1,
1, 0, 0, 1 };

bool used[n];

int j = 0;
int r = 0;
int i = 0;
int k = 0;

void dfs(int t) {

	used[t] = true;

	int p;

	for (i = k; i < n; i++) //Выбрать из непройденных вершин вершину с наименьшим номером. Если непройденных вершин нет, закончить работу – конец алгоритма.
	{
		j = r;
		if ((iArr[i][j] != 0) && (!used[i])) //Пройти выбранную вершину и отметить её в массиве пометок как пройденную (реализуется циклом по столбцу)
		{
			used[i] = true;
			p = i;

			printf("%d ", i);

			for (j = 0; j < m; j++)
			{
				i == p;
				if (iArr[i][j] != 0)
				{
					r = j;

					for (k = 0; k < n; k++)
					{
						j == r;

						if ((iArr[k][j] != 0) && (!used[k]))// ищем ребро, через которое можно попасть в еще непройденную вершину
						{
							dfs(i);
						}
					}
				}
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	for (int i = 0; i < n; i++)
	{
		used[i] = false; //всем вершинам присваивается значение "непосещенная"
		for (int j = 0; j < m; j++)
			printf("%d ", iArr[i][j]);
		printf("\n");
	}

	int from;
	printf("\nНапишите номер вершины: ");
	scanf_s("%d", &from);

	printf("\nРебра: \n");

	dfs(from);

	printf("\n");

	return 0;
}