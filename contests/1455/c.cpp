#include <bits/stdc++.h>

using namespace std;

int t, a, b;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (a == b + 1) cout << b << " " << b << "\n";
        else if (a == 0 || b == 0) cout << a << " " << b << "\n";
        else if (a == b) cout << b - 1 << " " << b << "\n";
        else if (a > b) cout << a - 1 << " " << b << "\n";
        else cout << a - 1 << " " << b << "\n";
    }

    return 0;
}