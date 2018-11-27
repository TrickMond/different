#include <stdio.h>

using namespace std;

int main()
{
    int a, c;
    scanf ("%d%d", &a, &c);
    do // Цикл с постусловием
    {
        a++;
        c++;
    } while (a < 0);
    do
    {
        c++;
    }while (c > 0);
	return 0;
}
