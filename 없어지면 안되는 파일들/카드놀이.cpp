#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <stdio.h>
using namespace std;
void djawnstlr(int A4, int B4, int A5, int B5) {
	if (A5 == B5) {
		cout << "D";
		return ;
	}
	if (B4 > A4) {
		cout << "B";
		return ;
	}
	if (B4 < A4) {
		cout << "A";
		return ;
	}
	if (A5 > B5) {
		cout << "A";
		return ;
	}
	else {
		cout << "B";
		return ;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A[10], B[10], A2 = 0, B2 = 0, A3 = 0, B3 = 0;
	for (int C = 0; C < 10; C++) {
		cin >> A[C];
	}
	for (int D = 0; D < 10; D++) {
		cin >> B[D];
	}
	for (int EA = 0; EA < 10; EA++) {
		if (A[EA] == B[EA]) {
			A2 += 1;
			B2 += 1;
			continue;
		}
		if (A[EA] > B[EA]) {
			A2 += 3;
			B3 = 0;
			A3 = 1;
		}
		if (A[EA] < B[EA]){
			B2 += 3;
			A3 = 0;
			B3 = 1;
		}
	}
	cout << A2 << " " << B2  << "\n";
	djawnstlr(A2, B2, A3, B3);
}