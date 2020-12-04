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

int t, n , q, l, r;
string s;
string aux;


int solve() {
	int ans=0;
	
  
  return ans;
}


int main() {
  IO

#ifndef ONLINE_JUDGE
    // FIN
    //FOUT
#endif

    cin >> t;
    while (t--) {
        cin >> n >> q >> s;

				while(q--){
					cin >> l >> r;
					aux = s.substr(l-1, r - l + 1);

          string aux1 = s.substr(r);

          bool after = aux1.find(aux[aux.size()-1]) != string::npos;



          string aux2 = s.substr(0, l-1);
          bool before = aux2.find(aux[0]) != string::npos;

          // cout << s << "\n";
          // cout << l << " " << r << "\n";
          // cout << aux << "\n";
          // cout << aux1 << "\n";
          // cout << aux2 << "\n\n";

           cout << (after or before ? "YES" : "NO") << "\n";



					// bool ok=false;
					// int k=0;
					// for(int i=0; i<n; i++){
					// 	if(s[i]==aux[k]){
					// 		k++;
					// 		i++;
					// 		if(k>r-l){
					// 			ok=true;
					// 			break;
					// 		}
					// 	}
					// }
					// cout << (ok?"yes":"no") << "\n";
				}

        // cout << "\n";
    }

    return 0;
}
