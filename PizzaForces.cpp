#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second

void solve(ll n) {

		if(n % 6 == 0){
			cout << (n*2.5) << endl;
		}
		else if(n % 8 == 0){
			cout << (n*2.5) << endl;
		}
		else{
			// code remaining...
		}	

}

int32_t main(int argc, char const *argv[])
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
		ll n;
		cin >> n;
		solve(n);
	}
	return 0;
}