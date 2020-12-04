#include <bits/stdc++.h>

using namespace std;

int t;
string s;
string aux;
int l, r;

int main() {

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

	cin>>t;

	while(t--) {
		cin >> s;

		for(int i=0; i<s.size(); i++){
			if(s[i]!=0) {
				l=i;
				break;
			}
		}

		reverse(s.begin(),s.end());

		for(int i=0; i<s.size(); i++){
			if(s[i]!=0) {
				r=i;
				break;
			}
		}

		cout << s.size()-l-r << "\n";
	
		
	}

    return 0;
}
		