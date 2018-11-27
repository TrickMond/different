#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a [1000];
    int n, s;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;





    s = 0;
    for (int i = 0; i < n; i++)
    {
        if ((0<=a[i])&&(a[i]%2!=0))
        {
            s = s + a[i];
        }
    }




    printf ("%d",s);
	return 0;
}
