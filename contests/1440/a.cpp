#include <bits/stdc++.h>

using namespace std;

int get_cost(char c, int c0, int c1) {
    return c == '0' ? c0 : c1;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;

        int costs[] = { c0, c1 };

        string s;
        cin >> s;

        int arr[n];
        int cost = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = s.at(i) - '0';
            cost += costs[arr[i]];
        }

        for (int i = 0; i < n; i++) {
            cost = min(cost, cost - costs[arr[i]] + costs[abs(arr[i] - 1)] + h);
        }

        cout << cost << endl;
    }

    return 0;
}
