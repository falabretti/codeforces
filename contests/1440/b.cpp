#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        int k;

        cin >> n >> k;

        unsigned long long int arr[n * k];

        for (int i = 0; i < n * k; i++) {
            cin >> arr[i];
        }

        unsigned long long int median = ceil(n / 2.);
        unsigned long long int step = (n - median);

        unsigned long long int sum = 0;

        for (int i = (n * k) - step, c = 0; i > 0 and c < k; i -= (step + 1), c++) {
            sum += arr[i - 1];
        }

        cout << sum << endl;
    }

    return 0;
}
