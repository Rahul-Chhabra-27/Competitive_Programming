#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt","r",stdin);

		// for writting output to output.txt
		freopen("output.txt","w",stdout);
		// ----------------output-------------------------------//
	#endif()

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> problems(n);

		for(int i = 0;i<n; i++) {
			int x;
			cin >> x;
			problems[i] = x;
		}
		int countMinProblems = 0;
		int currentProblem = 0;

		for(int i = 0;i<n;i++) {

			if(problems[i] <= 7) {
				countMinProblems++;
			}
			if(countMinProblems == 7){
				currentProblem = i;
				break;
			}
		}
		cout  << currentProblem+1 << endl;
	}
	return 0;
}