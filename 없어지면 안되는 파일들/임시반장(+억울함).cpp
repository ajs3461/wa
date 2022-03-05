#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <stdio.h>
using namespace std;
int C[1001][5];
int um[1001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A;
	cin >> A;
	for (int B = 0; B < A; B++) {
		for (int C2 = 0; C2 < 5; C2++) {
			cin >> C[B][C2]; //여기까지 예제 입력 받음
		}
	}
	//C[4][0] = (1)'첫번째 사람'
	// 여긴 문제 풀기
	int wlqrkrhtlvek[1001] = {0};
	for (int D = 0; D < A; D++) {//학생 
		for (int D1 = 0; D1 < 5; D1++) {//학년 
			for (int D2 = 0; D2 < A; D2++) {//다른학생
				if (C[D][D1] == C[D2][D1]) {
					if (wlqrkrhtlvek[D2] >= 1) {
						continue;
					}
					++wlqrkrhtlvek[D2];
					um[D]++;
				}
			}
		}
		for (int tlqkf = 0; tlqkf < A; tlqkf++) {
			wlqrkrhtlvek[tlqkf] = 0;
		}
		um[D] -= 1;
	}
	int dk = -1;
	int d = 0;
	for (int wnstlr = 0; wnstlr < A; wnstlr++) {
		if (dk < um[wnstlr]) {
			dk = um[wnstlr];
			d = wnstlr;
		}
	}
	cout << d + 1 << "\n";
}