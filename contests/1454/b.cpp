#pragma GCC optimize("Ofast,02")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

#define IO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
#define FIN freopen("entrada.in", "r", stdin);
#define FOUT freopen("saida.sol", "w", stdout);
#define ull unsigned long long
#define ll long long
#define pii pair<int, int>
#define pb push_back
#define eb emplace_back
#define MAX int(1e4+10)
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
using namespace std;

int t;

typedef struct pos {
	int val;
	int pos = 0;
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
	cin >> t;

	while (t--) {

        int n;
		cin >> n;
		pos vet[n + 1];

		for(int i=1; i<=n; i++){
			vet[i].val = 0;
		}

		int a;

		for(int i=0; i<n; i++){
			cin>>a;
			vet[a].val++;
			vet[a].pos = i+1;
		}

		int res = -1;
		for (int i = 1; i<=n; i++) {
			if(vet[i].val==1) {
				res=vet[i].pos;
				break;
			} 
		}

		cout << res << "\n";
}
    return 0;
}
