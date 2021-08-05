#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define ll long long int

void combination(vector<ll>& nums,int n){

	vector<ll> ans;

	for(int i = 0;i<n;i++) {

		if(nums[i]%2 == 0){  // for even
			ans.push_back(nums[i]);
		}	
	}
	for(int i = 0;i<n;i++) {

		if(nums[i]%2 != 0){  // for odd
			ans.push_back(nums[i]);
		}	
	}

	for(auto values : ans) cout << values << " ";
	std::cout << endl;
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

		vector<ll> nums(n);

		for(int i = 0;i<n;i++) {
			int x;
			cin >> x;
			nums[i] = x;
		}
		combination(nums,n);
	}
	return 0;
}