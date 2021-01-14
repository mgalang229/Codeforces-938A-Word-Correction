#include <bits/stdc++.h>

using namespace std;

const string v = "aeiouy";

bool Vowel(char c) {
	return v.find(c) != -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	cout << s[0];
	for (int i = 1; i < n; i++) {
		// check if at least the current or the previous character is not a vowel
		if (!Vowel(s[i - 1]) || !Vowel(s[i])) {
			cout << s[i];
		}
	}
	cout << '\n';
}
