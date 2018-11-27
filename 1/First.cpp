#include <stdio.h>

int main()
{
    int a, b, c, f = 0;
    scanf("%d%d%d",&a,&b,&c);
    if (a!=b)
    {
        if (b<c)
        {
            a = a + c;
            f = b + a;
        }
        else
        {
            b = b + c;
            f = c + b;
        }
    }
    else
    {
        a = a + b;
        f = a + c;
    }
    printf ("%d",f);
	return 0;
}
