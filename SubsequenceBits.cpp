#include<bits/stdc++.h>

using namespace std;

#define ll        long long int
#define ff        first
#define ss        second
#define vi        std::vector<int>
#define vpii      std::vector<pair<int,int>>
#define vc        std::vector<char>;
#define umii      unordered_map<int,int>
#define all(n)    (n.begin(),n.end())


int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// --------------------------output-------------------------------//
	#endif

	int n; 
	cin >> n;
	std::vector<int> a(n);
	for(int i = 0;i<n;i++){
		int x ;
		cin >> x;
		a[i] = x;
	}

	for(int i = 1;i<(1<<n);i++) { // time complexity = O(2^n)*n.
		int num = i;
		int size = 0;
		while(n > size) {
			// if the bit is set or not
			if(num&1) {
				cout << a[size] << " ";
			}
			size++;
			num = (num >> 1);
		}
	    cout << '\n';
    }
}