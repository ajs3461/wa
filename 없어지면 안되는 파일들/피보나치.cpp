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
	int A, tlqkf = 1, diqkf = 1;//tlqkf : 짝수번째, diqkf : 홀수번째
	cin >> A;
	for (int B = 0; B < A; B++) {
		if (B % 2 == 0) {
			cout << diqkf << "\n";
			diqkf = tlqkf + diqkf;
			// 현재 수 전 수 전전 수
		}
		else if (B % 2 == 1) {
			cout << tlqkf << "\n";
			tlqkf = diqkf + tlqkf;
		}
	}
}