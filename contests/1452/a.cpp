#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int solve(int x, int y) {

    int res = 0;

    int a = min(x, y);

    x -= a;
    y -= a;

    int r = (x == 0 ? y : x);

    return max(r * 2 - 1, 0) + a * 2;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int res = solve(x, y);
        cout << res << "\n";
    }

    return 0;
}
