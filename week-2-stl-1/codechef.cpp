#include <bits/stdc++.h>
using namespace std;



int countTotalString(string s) {
    set<string> visited;
    queue<string> q;

    visited.insert(s);
    q.push(s);

    while (!q.empty()) {
        string curr = q.front();
        q.pop();

        int zeros = 0, ones = 0;

        // Try all valid prefixes
        for (int i = 0; i < curr.length(); i++) {
            if (curr[i] == '0') zeros++;
            else ones++;

            if (zeros == ones) {
                // Flip prefix [0...i]
                string next = curr;
                for (int j = 0; j <= i; j++) {
                    next[j] = (next[j] == '0') ? '1' : '0';
                }

                // If new, add to queue
                if (visited.find(next) == visited.end()) {
                    visited.insert(next);
                    q.push(next);
                }
            }
        }
    }

    return visited.size();
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> T;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        cout << countPossibleStrings(S) << endl;
    }
    return 0;
    return 0;
}