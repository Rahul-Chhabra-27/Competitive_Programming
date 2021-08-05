#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second

ll pairs(vector<int> nums,int n) {

	ll totalPairs = (ll)n*(n-1);

	unordered_map<ll,int> map;

	for(int i = 0;i<n;i++) { // store the frequency of elements
		map[nums[i]]++;
	}

	for(auto val : map) {
		ll freq = (ll)val.ss;
		totalPairs -= (freq*(freq-1));
	}

	return totalPairs;
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
		int n;
		cin >> n;

		vector<int> nums(n);

		for(int i= 0;i<n;i++) {
			int x;
			cin >> x;
			nums[i] = x;
		}
		cout << pairs(nums,n) <<endl;
	}
}