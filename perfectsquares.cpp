#include <bits/stdc++.h>

using namespace std;

bool perfect_square(int n) {
        return pow(floor(sqrt(n)),2) == n;
}

int numSquares(int n) {
	int dp[n+1];
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		
		int a = 1;
		int min_numbers = INT_MAX;
		if (perfect_square(i)) {
			dp[i] = 1;
			continue;
		}
		
		while (i-pow(a,2) > 0) {
			min_numbers = min(min_numbers, 1+dp[i-(int)pow(a,2)]);
			a++;   
		}
		dp[i] = min_numbers;   
	}
	return dp[n];
}
    
    

int main() {
	for (int i = 1; i <= 15; i++) {
		cout << numSquares(i) << endl;
	}
}
