#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		char a[3][3];
		for(int i=0; i<3; ++i)
			for(int j=0; j<3; ++j)
				cin >> a[i][j];
		bool ok=0;
		for(int i=0; i<3; ++i)
			for(int j=0; j<3; ++j)
				if(a[i][j]=='l'&&i<2&&j<2)
					if(a[i+1][j]=='l')
						if(a[i+1][j+1]=='l')
							ok=1;
		cout << (ok?"yes":"no") << "\n";
	}
}
