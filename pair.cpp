#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second

int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// --------------------------output-------------------------------//
	#endif

	int t;
	cin >> t;

	while(t--) {
		int a,b,c;
		cin >> a >> b >> c;
		ll ans = 0;
		if(a >= b) {
			ans += a;

			if(b >= c){
				ans += b;
			}
			else {
				ans += c;
			}
		}
		else {

			ans += b;

			if(a >= c){
				ans += a;
			}
			else {
				ans += c;
			}
		}
		cout << ans << endl;
	}
}