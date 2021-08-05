
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second


void build(int *a, int *segtree,int s,int e,int tidx) {

	//Base case
	if(s == e) {
		segtree[tidx] = a[s];
		return;
	}

	// mid index
	int mid = (s+e)/2;

	// recursive intution
	build(a,segtree,s,mid,2*tidx);  // left subtree 
	build(a,segtree,mid+1,e,2*tidx+1); // right subtree

	// self work
	segtree[tidx] = segtree[2*tidx] + segtree[2*tidx+1];

	return;
}

// query 1
void update (int *a,int *segtree,int s,int e,int idx,int val,int tidx) {

	// Base case
	if(s == e) {
		a[idx] = val;
		segtree[tidx] = val;
		return;
	}

	int mid = (s+e)/2;
	
	if(mid < idx) {
		update(a,segtree,mid+1,e,idx,val,2*tidx+1);
	}
	else {
		update(a,segtree,s,mid,idx,val,2*tidx);
	}

	segtree[tidx] = segtree[2*tidx] + segtree[2*tidx+1];

	return;
}

// query 2
int query(int *segtree,int s,int e,int tidx,int left,int right) {

	// completely outside
	if(s > right or e < left) {
		return 0;
	}

	// complete inside
	if( left <= s and right >= e ) {
		return segtree[tidx];
	}

	int mid = (s+e)/2;
	int ans = query(segtree,s,mid,2*tidx,left,right) + query(segtree,mid+1,e,2*tidx+1,left,right);

	return ans;
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

	int n; cin >> n;

	int *a = new int[n];

	for(int i = 0;i<n;i++) {
		cin >> a[i];
	}
	int *segtree = new int[4*n];
	build(a,segtree,0,n-1,1);
	int q;
	cin >> q;
	while(q--) {
		int type; cin >> type;

		if(type == 1) {
			int l,r; cin >> l >> r;
			cout << query(segtree,0,n-1,1,l,r) << '\n';
		}
		else {
			int i,val;
		    cin >> i >> val;
			update(a,segtree,0,n-1,i,val,1);
		}
	}
}