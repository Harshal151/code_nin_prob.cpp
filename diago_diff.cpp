#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int k = 0;
    int nl = 0;
    int r = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < i + 1; j++)
        {
            k += a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        while (r >= 0)
        {
            nl += a[i][r];
            break;
        }
        r = r - 1;
    }
    cout << nl << endl;
    cout << k << endl;
    int diff = k - nl;
    if (diff < 0)
    {
        diff = abs(diff);
    }
    cout << diff;
    return 0;
}
