#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
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

	int n;
	cin >> n;
	std::vector<int> degree(n);

	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		degree[i] = x;
	}
	bool flag = false;
	for(int i = 1;i<(1 << n);i++){
		int size = 0;
		int num = i;
		ll rotation = 0;
		while(size < n) {

			if(num&1) {
				rotation += degree[size];
			}
			else {
				rotation -= degree[size];
			}

			size++;
			num = num >> 1;
		}
		if(rotation == 0){
			flag = true;
		}
		else if(rotation%360 == 0) {
			flag = true;
		}
	}
	if(flag) {
		cout <<"YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}
}