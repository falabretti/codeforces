#include <bits/stdc++.h>

using namespace std;

int t, n, k;
string a, b;

int main() {

    cin >> t;
    while (t--) {

        string ans = "YES";

        int veta[30], vetb[30];
        memset(veta, 0, sizeof veta);
        memset(vetb, 0, sizeof vetb);

        cin >> n >> k;
        cin >> a >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (char i : a) {
            veta[i - 'a']++;   
        }
        for (char i : b) {
            vetb[i - 'a']++;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if (a[i] < b[i]) {
                    if (veta[a[i] - 'a'] >= k) {
                        veta[a[i] - 'a'] -= k;
                        veta[b[i] - 'a'] += k;
                        i += k - 1;
                    }
                }
            }
        }

        for (int i = 0; i < 30; i++) {
            if (veta[i] != vetb[i]) {
                ans = "NO";
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
