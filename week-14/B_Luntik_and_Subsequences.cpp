#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> numbers(n);
        for (long long i = 0; i < n; i++)
           {
            cin >> numbers[i];
           }

        long long countOfOnes = 0;
        long long countOfZeros = 0;
        for (long long i = 0; i < n; i++)
        {
            if (numbers[i] == 1)
                countOfOnes++;
            else if (numbers[i] == 0)
                countOfZeros++;
        }

        long long ways = pow(2, countOfZeros) * countOfOnes;
        cout << ways << endl;
    }
    return 0;
}
