#include <bits/stdc++.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "!!!Массив начинается с i = 1 в алгоритме, в программе с i = 0, но выводит как в алгоритме\n\n";
    for (int i = 0;i < n -1; i++)
        for (int j = 0; j < n - i - 1; j++)
    {
        if (a[j] < a[j+1])
        {
            printf(">>>>I = %d... Swapped a[%d]=%d and a[%d]=%d\n",i+1,j+1,a[j],j+2,a[j+1]);
            swap (a[j],a[j+1]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
	return 0;
}
