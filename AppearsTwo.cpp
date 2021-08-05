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

	cout << (1 << 10) << endl;
	int n;
	cin >> n;

	vector<int> nums(n);

	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		nums[i] = x;
	}
	int finalOuput = nums[0];

	for(int i = 1;i<n;i++) {
		finalOuput ^= nums[i];
	}

	int temp = finalOuput;
	int position = 0;
	while(temp) {

		if(temp&1) {
			break;
		}
		else {
			position++; // position of first right set bit.
			temp = temp >> 1;
		}
	}

	int firstBit = -1;
	for(int i = 0;i<n;i++) {

		if((nums[i] >> position)&1) {
			if(firstBit == -1) {
				firstBit = nums[i];
			}
			else {
				firstBit = firstBit^nums[i];
			}
		}
	}
	cout << firstBit <<" " <<(finalOuput^firstBit) << endl;
}