#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// --------------------------output-------------------------------//
	#endif

    // >> (right shift)  <<<<<<------->>>>>>   << (left shift)
		
	int a = 5;
	int b = 7;
	cout << (a^b) << endl;
	cout << (5 << 1) << " " <<  (5 >> 1) << endl;
	int x = 5;
	int y = ~x;
	cout << y << endl;

	int arr[] = {1,2,2,3,1,4,4,5,6,5,6,3,7,7,8};
	int v = sizeof(arr)/sizeof(arr[0]);
	int num = arr[0];

	for(int i = 1;i<v;i++) {
		num = num^arr[i];
	}
	cout  << num << endl;

	int p = 10;
	int q = 20;

	p = p^q;
	q = p^q;
	p = p^q;

	cout << p << "  " << q << endl;

	int el = 1;
	for(int i = 2;i<=10;i++){
		el = el^i;
	}
	cout << el << endl;

	if((14&1)){
		cout << "odd" << endl;
	}
	else{
		cout << "even" << endl;
	}

	// check for set bit

	int l = 106;
	int i = 6;

	int mask = 1 << i;

	bool flag = l&mask;
	cout << flag << endl;
	return 0;
}