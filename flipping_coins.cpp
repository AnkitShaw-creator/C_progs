#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> coins;

int main()
{
    long long int n, q;
    cin >> n >> q;
    coins.assign(n, 0);

    while (q--)
    {
        int c;
        long long int a, b;
        cin >> c >> a >> b;
        if (c == 0)
        {
            for (long int i = a; i <= b; i++)
            {

                if (coins.at(i) == 0)
                {
                    coins.at(i) = 1;
                }
                else
                {
                    coins.at(i) = 0;
                }
            }
        }
        if (c == 1)
        {
            long int x = count(coins.begin() + a, coins.begin() + b + 1, 1);
            cout << x << endl;
        }
    }
}
