#include <stdio.h>
#include <locale.h>
#include <math.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	float c = 0, d = 0, m = 0, y = 0, x = 0;
	printf("Отрезок на котором необходимо найти минимум функции [C;D] ");
	scanf("%f%f", &c, &d);
	x = c;
	m = x*x;
	while (x < d)
	{
		x = x + 0.01;
		y = x*x;
		if (y < m)
		{
			m = y;
		}
	}
    printf("Минимум: %f", m);
	return 0;
}
