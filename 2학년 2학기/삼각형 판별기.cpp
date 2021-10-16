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
	int A, B, C;
	cin >> A >> B >> C;
	for (int D = 1; D < 2; D++) {
		if (A == 60 && B == 60 && C == 60) {
			cout << "Equilateral";
			break;
		}
		if (A + B + C == 180) {
			if (B == C || A == B || A == C) {
				cout << "Isosceles";
				break;
			}
			else {
				cout << "Scalene";
				break;
			}
		}
		if (A + B + C != 180) {
			cout << "Error";
			break;
		}
	}
}