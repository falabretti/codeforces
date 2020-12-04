#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int count(vector<int> arr[], int x) {
    int c = 1;
    int l = arr[x][0];

    for (int i = 1; i < arr[x].size(); i++) {
        if (arr[x][i] != l + 1) {
            c++;
        }

        l = arr[x][i];
    }

    return c;
}

int main() {

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr[n + 1];

        int first = -1;
        int last = -1;        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr[x].push_back(i);

            if (i == 0) {
                first = x;
            }

            if (i == n - 1) {
                last = x;
            }
        }

        int m = -1;
        for (int i = 0; i <= n; i++) {
            // cout << arr[i].size() << endl;
            if (arr[i].size() > 0) {
                if (m == -1 or arr[i].size() < arr[m].size()) {
                    m = i;
                }
            }
        }

        int aux = n + 2;
        int v;

        if (first == last) {
            v = count(arr, first);
            aux = v - 2;
        }

        // cout << count(arr, first) << "\n";
        // cout << count(arr, last) << "\n";
        // cout << count(arr, m) << "\n\n";


        aux = min(aux, count(arr, first) - 1);
        aux = min(aux, count(arr, last) - 1);
        aux = min(aux, count(arr, m));

        cout << aux + 1 << "\n";
    }

    return 0;
}
