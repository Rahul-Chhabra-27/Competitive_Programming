#include<bits/stdc++.h>

using namespace std;

#define ll    long long int
#define ff    first
#define ss    second
#define vi    vector<int>
#define pii   pair<int,int>

int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// --------------------------output-------------------------------//
	#endif


	int i = 10; // variable
	int *p = &i; // pointer pointing to location of i in memory

	cout << &i <<" "<< p << endl;

	(*p)++;
	cout << i << " " <<  *p << endl;

	int *q = p;

	(*q)++;

	cout << *q <<" " <<  *p << " " << i << endl;
}