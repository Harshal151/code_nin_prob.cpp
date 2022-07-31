#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int count = 0;
    cin >> n >> k;
    if (k > n)
    {
        cout << "Your kth element is greater than N so its not valid !!!!!!!!";
    }
    else
    {
        for (int i = k; i < n + 1; i++)
        {
            if (i > n / 2 && i <= n - 1)
            {
                count++;
                cout << i << "->" << i+1 << endl;
            }
            else if (i == n)
            {
                while (i != 1)
                {
                    count++;
                    cout << i << "->" << i-1 << endl;
                    i--;
                }
                break;
            }
            else
            {
                while (i != 1)
                {
                    count++;
                    cout << i << "->" << i-1 << endl;
                    i--;
                    if (i == 1)
                    {
                        while (i != n)
                        {
                            count++;
                            cout << i << "->" << i+1 << endl;
                            i++;
                        }
                        break;
                    }
                }
            }
        }
        cout << "The minimum steps requried are: " << count;
    }
    return 0;
}