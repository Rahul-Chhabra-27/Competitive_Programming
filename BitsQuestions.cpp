#include<bits/stdc++.h>
using namespace std;


// kernigham's algo is used to find out all the set bits of given number
void kernigham(int n){ 

	while(n != 0) {
		int rmsb = n&-n;
		n -= rmsb;
		cout << n << endl;
	}
}
// flip the bit of n at position i (0 ->> 1 or 1 ->> 0)
void setBit(int n,int i) {

	int mask = 1 << i;
	int ans = n^mask;

	cout << ans << endl;
}
// number occur at once
int firstNumber() {

	int a[] = {1,6,1,3,3,4,4,5,5};
	int n = sizeof(a)/sizeof(a[0]);

	int num = a[0];

	for(int i = 1;i<n;i++) {
		num = num^a[i];
	}

	return num;
}
int main(int argc, char const *argv[])
{
	//Right most set bit
	//00011010 right most set bit is at position 1 from right to left.

	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// --------------------------output-------------------------------//
	#endif

	int n = 10;
	n = n & -n;
	// cout << n << endl;
	// kernigham(7);
	// setBit(4,0);
	cout << firstNumber() << endl;
	return 0;
}