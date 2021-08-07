#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <stdio.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A, tlqkf, diqkf = 1, toRl = 1;
	cin >> A;
	tlqkf = 1;
	for (int B = 0; B < A; B++) {
		toRl++;
		if (toRl / 2 == 0) {
			diqkf = tlqkf + 1 + tlqkf + 2;
			cout << diqkf << "\n";
		}
		else if (toRl / 2 == 1) {
			tlqkf = diqkf;
			tlqkf = diqkf + 1 + diqkf + 2;
			cout << tlqkf << "\n";
			toRl = 1;
		}
	}
}