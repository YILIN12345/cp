#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int dp[1000005];
int main() {
	int n;
	cin >> n;
	dp[0] = 1;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= 6;j++) {
			if (i - j < 0) {
				break;
			}
			dp[i] += dp[i - j];
			dp[i] = dp[i] % mod;
		}
	}
	cout << dp[n] << '\n';
}
