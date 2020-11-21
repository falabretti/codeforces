#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int solve(string s) {

    int res = 0;
    int p = 0;
    int b = 0;

    for (char c : s) {
        if (c == '[') {
            b++;
        }

        if (c == '(') {
            p++;
        }

        if (c == ']') {
            if (b <= 0) continue;
            res++;
            b = max(0, b - 1);
        }

        if (c == ')') {
            if(p <= 0) continue;
            res++;
            p = max(0, p - 1);
        }
    }

    return res;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int res = solve(s);
        cout << res << "\n";
    }

    return 0;
}
