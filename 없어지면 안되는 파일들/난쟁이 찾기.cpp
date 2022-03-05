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
	int input[9];
	int sry = 0, DOOM= 0;
	for (int help = 0; help < 9; help++) {
		cin >> input[help];
	}
	sort(input, input + 9);
	while (true) {
		sry = input[0] + input[1] + input[2] + input[3] + input[4] + input[5] + input[6] + input[7] + input[8];
		break;
	}
	for (int E = 0; E <= 8; E++) {
		for (int A = 0; A <= 8; A++) {
			if (E == A) {
				continue;
			}
			else {
				sry = input[0] + input[1] + input[2] + input[3] + input[4] + input[5] + input[6] + input[7] + input[8];
			}
			DOOM = input[E] + input[A];
			sry -= DOOM;
			if (sry == 100) {
				for (int help_me_plz = 0; help_me_plz <= 8; help_me_plz++) {
					if (input[help_me_plz] == input[E] || input[help_me_plz] == input[A]) {
						continue;
					}
					else {
						cout << input[help_me_plz] << "\n";
					}
				}
				E = 9;
				A = 9;
				break;
			}
		}
	}
}