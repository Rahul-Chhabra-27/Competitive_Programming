#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define ll long long int

ll countMax(vector<ll>& nums,int n) {

	// freq map
	std::unordered_map <ll,ll> freq;

	for(int i = 0;i<n;i++){

		if(nums[i]%2 == 0) {
			ll allPairs = nums[i]/2;
			ll rem = allPairs-1;

			freq[nums[i]] = (rem*2) + 1;
		}
		else {
			freq[nums[i]] = (nums[i]/2)*2;
		}
	}

	// final output
	ll count = 0;

	for(int i = 0;i<n;i++) {

		if(freq.count(nums[i])) {
            // cout << nums[i] << " ";
			ll frequency = freq[nums[i]];

			if(frequency == 1){
				count++;
				freq.erase(nums[i]);
			}
			else {
				count++;
				freq[nums[i]] = frequency-1;
			}
		}
	}

	return count;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// ----------------output-------------------------------//
	#endif

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		vector<ll> nums(n);

		for(int i = 0;i<n;i++) {
			int x;
			cin >> x;
			nums[i] = x;
		}

		cout << countMax(nums,n) << endl; 
	}
	return 0;
}