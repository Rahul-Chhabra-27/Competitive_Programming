#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }

    int maximum = *max_element(a.begin(), a.end()), ans = 0;
    vector<vector<int>> store(n, vector<int>(k + 1, 1));
    vector<int> idx(maxi+1,-1);
    vector<int> max_answer(k + 1); 
    for (int i = 0; i < n; i++) {
        for (int j = k; j >= 0; j--) {
            if (j >= 1) {
                store[i][j] = max_answer[j - 1] + 1;
            }
            if (idx[a[i]] != -1) {
                store[i][j] = max(store[i][j], store[idx[a[i]]][j] + 1);
            }
            max_answer[j] = max(max_answer[j], store[i][j]);
            ans = max(ans, store[i][j]);
        }
        idx[a[i]] = i;
    }
    cout << ans << '\n';
}

int main() {
	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// --------------------------output-------------------------------//
	#endif
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}		