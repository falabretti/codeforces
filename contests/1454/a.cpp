#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << ((i + 1) % n) + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}
