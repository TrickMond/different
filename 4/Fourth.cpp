#include <stdio.h>

using namespace std;

int main()
{
    double a,b,c;
    scanf ("%lf%lf%lf",&a,&b,&c);
    while (b<(c+a))
    {
        if ((b+3)<c)
        {
            b = b -1;
            a = a - 1;
        }
        else
        {
            break;
        }
    }
    printf ("%lf%lf",a,b);
	return 0;
}
