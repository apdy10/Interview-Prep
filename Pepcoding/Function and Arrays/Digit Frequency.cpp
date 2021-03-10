// Digit Frequency
#include<iostream>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int num, digit, count = 0;
	cin >> num >> digit;
	while (num) {
		int ck;

		ck = num % 10;
		num = num / 10;

		if (ck == digit) {
			count++;
		}

	}
	cout << count;
}
