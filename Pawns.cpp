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
		int n;
		cin >> n;
		string a,b;
		cin >> a;
		cin >> b;
		vector<int> h(n);
		vector<int> e(n);

		for(int i = 0;i<n;i++){
			if(a[i] == '0'){
				e[i] = 0;
			}
			else {
				e[i] = 1;
			}
		}
		for(int i =0;i<n;i++ ) {
			if(b[i] == '0'){
				h[i] = 0;
			}
			else {
				h[i] = 1;
			}
		}

		for(int i = 0;i<n;i++) {

			if(h[i] == 0) continue; // our pawn

			if(h[i] == 1 && e[i] == 0) {
				e[i] =-1;

			}
			// cout <<h[i];
			else if(i == 0) {
				if(e[i+1] == 1) {
					e[i+1] = -1;
				}
			}
			else if(i == n-1) {
				if(e[i-1] == 1){
					e[i-1] = -1;
				}
			}
			else {
				if(e[i-1] == 1){
					e[i-1] = -1;
				}
				else if(e[i+1] == 1){
					e[i+1] = -1;
				}
			}
		}
		int count = 0;
		for(int i = 0;i<n;i++){
			if(e[i] == -1){
				count++;
			}
		}
		cout << count << endl; 
	}
}