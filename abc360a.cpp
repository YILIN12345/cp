#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	if (s[0] == 'R') {
		cout << "Yes";
	}
	else if (s[1] == 'R' and s[2] == 'M') {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
