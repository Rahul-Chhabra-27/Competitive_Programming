#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second

void checkAlert(vector<ll>& rain,int n,int d,int h) {

	bool checkforAlert  = false;
	ll waterLevel = 0;
	for(int i = 0;i<n;i++) {

		if(rain[i] == 0) {
			if(waterLevel > d) {
				waterLevel -= d;
			}
			else {
				waterLevel = 0;
			}
		}
		else {
			waterLevel += rain[i];
		}

		if(waterLevel > h) {
			checkforAlert = true;
			break;
		}
	}

	if(checkforAlert) {
		cout <<"YES" << endl;
	}
	else {
		cout <<"NO" << endl;
	}
}
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
		ll n,d,h;
		cin >> n  >> d >> h;

		vector<ll> rain(n);

		for(int i = 0;i<n;i++) {
			ll x;
			cin >> x;
			rain[i] = x;
		}
		checkAlert(rain,n,d,h);
	}
}