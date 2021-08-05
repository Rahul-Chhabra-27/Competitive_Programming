#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second

void lexicographically(vector<int> A,vector<int> B,int n) {

	int currentIdx = INT_MAX;
	int current = INT_MAX;
	int parent = n;
	for(int i = 0;i<n;i++) {

		if((A[0] + B[i])%n < current) {
			currentIdx = i;
			current = (A[0]+B[i])%n;
		}
		else if((A[0]+B[i])%n == current) {
			if(i == n-1){
				parent = parent > (A[1]+B[0])%n ? (A[1]+B[0])%n:parent;
				current = i;
			}
			else {
				parent = parent > (A[1]+B[i+1])%n ? (A[1]+B[i+1])%n:parent;
				current = i;
			}
		}
	}
	vector<int> el;
	el.push_back(B[currentIdx]);
	for(int i = currentIdx+1;i<n;i++){
		el.push_back(B[i]);
	}
	for(int i = 0;i<currentIdx;i++) {
		el.push_back(B[i]);
	} 

	for(int i = 0;i<n;i++) {
		cout << (A[i]+el[i])%n <<" ";
	}
	cout << endl;
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
		vector<int> A(n);
		vector<int> B(n);

		for(int i = 0;i<n;i++) {
			int x;
			cin >> x;
			A[i] = x;
		}
		for(int i = 0;i<n;i++) {
			int x;
			cin >> x;
			B[i] = x;
		}
		lexicographically(A,B,n);
	}
}