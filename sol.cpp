#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	// store the vowels for checking
	string vowels = "aeiouy";	
	string tmp = s;
	string ans = "";
	// run the loop until the condition is met inside
	while (true) {
		// reset 'ans' and assign the first character from 'tmp'
		ans = tmp[0];
		for (int i = 1; i < (int) tmp.size(); i++) {
			bool checker1 = false;
			bool checker2 = false;
			// check if the current and previous characters are both vowels
			for (int j = 0; j < (int) vowels.size(); j++) {
				if (s[i] == vowels[j]) {
					checker1 = true;
				}
				if (s[i - 1] == vowels[j]) {
					checker2 = true;
				}
			}
			if (checker1 && checker2) {
				// if true then skip the current character
				continue;
			} else {
				// otherwise, add it to 'ans'
				ans += tmp[i];
			}
		}
		bool final_check = true;
		// do the same conditions but this time in 'ans'
		for (int i = 0; i < (int) ans.size(); i++) {
			bool checker1 = false;
			bool checker2 = false;
			for (int j = 0; j < (int) vowels.size(); j++) {
				if (ans[i] == vowels[j]) {
					checker1 = true;
				}
				if (ans[i + 1] == vowels[j]) {
					checker2 = true;
				}
			}
			// if there are still consecutive vowels left then set final_checker to false
			if (checker1 && checker2) {
				final_check = false;
				break;
			}
		}
		if (final_check) {
			// if condition is met, break the loop
			break;
		} else {
			// otherwise assign 'ans' to 'tmp' for new checking
			tmp = ans;
		}
	}
	cout << ans << '\n';
}
