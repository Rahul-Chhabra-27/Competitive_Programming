#include <bits/stdc++.h>
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
		// ----------------output-------------------------------
	#endif

// ----------------------------Start Writing code here------------------------------------------

	int n;
	cin >> n;
	vector<int> v(n+1);
	for(int i = 0;i<= n;i++) {

		int x = i*v.size(); // 0 6 12 18 24 30

		v[i] = x;
	}

	int lowerBound = lower_bound(v.begin(), v.end(),6)-v.begin();
	int upperBound = upper_bound(v.begin(), v.end(),6)-v.begin();

	cout << lowerBound << " " << upperBound << std::endl;
	return 0;
}
