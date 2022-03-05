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
	
	double x1, y1, x2, y2, x3, y3, holy, moly, A, B, AB, AC, BC, help_me, pepe;
	
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	holy = y3 - y1; 
	moly = x2 - x1;
	A = y2 - y1;
	B = x3 - x1;
	//x1, y1 = A  |  x2, y2 = B  |  x3, y3 = C     
	
	 // 틀렸을 때 -1을 출력하는 for문
	if (holy * moly == A * B) { // 비례식은 신이야! 
		cout << -1;
	}
	else {
		AB = sqrt(moly * moly + A * A);
		AC = sqrt(holy * holy + B * B);
		BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		help_me = min(min(AB + AC, AC + BC), AB + BC);
		pepe = max(max(AB + AC, AC + BC), AB + BC);
		cout << fixed;
		cout.precision(16);
		cout << (pepe - help_me) * 2;
	}
}