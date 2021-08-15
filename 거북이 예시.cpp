#include<iostream>
#include<string>

using namespace std;

int dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
int curdir=0;//0: 위 1:오른쪽 2:아래 3:왼쪽

int loc[2] = { 0,0 };
int maxloc[4];//0: 왼쪽 1:오른쪽 2아래 3 위쪽
void clear() {
	curdir = 0;

	loc[0] = 0;
	loc[1] = 0;

	for (int i = 0; i < 4; i++) {
		maxloc[i] = 0;
	}
}
void getArea() {
	if (loc[0] < maxloc[0]) {
		maxloc[0] = loc[0];
	}
	if (loc[0] > maxloc[1]) {
		maxloc[1] = loc[0];
	}
	if (loc[1] < maxloc[2]) {
		maxloc[2] = loc[1];
	}
	if (loc[1] > maxloc[3]) {
		maxloc[3] = loc[1];
	}

	//cout << "cur loc: " << loc[0] << ", " << loc[1] << "\n";
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	string input;
	cin >> t;
	while (t > 0) {
		cin >> input;
		for (int i = 0; i < input.size();i++) {
			switch (input[i]) {
			case 'F':
				loc[0] += dir[curdir][0];
				loc[1] += dir[curdir][1];
				break;
			case 'B':
				loc[0] -= dir[curdir][0];
				loc[1] -= dir[curdir][1];
				break;
			case 'L':
				curdir = (curdir + 3) % 4;
				break;
			case 'R':
				curdir = (curdir + 1) % 4;
			}
			getArea();

		}
		cout << (maxloc[1] - maxloc[0]) * (maxloc[3] - maxloc[2]) << "\n";
		clear();
		t--;
	}

}