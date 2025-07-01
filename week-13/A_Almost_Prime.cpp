#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;

    for (int j = 1; j <= n; j++) {
        int num = j;
        int prime_divisors = 0;

        for (int i = 2; i  <= num; i++) {
            if (num % i == 0) {
                prime_divisors++;
                while (num % i == 0) {
                    num /= i;
                }
            }
        }

        if (prime_divisors == 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
