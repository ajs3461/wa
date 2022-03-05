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
	int T, A = 300, B = 60, C = 10, A2 = 0, B2 = 0, C2 = 0;
	cin >> T;
	while (T >= 0) {
		if (T == 0) {
			cout << A2 << " " << B2 << " " << C2;
			break;
		}
		if (T <= 9) {
			cout << "-1";
			break;
		}
		if (T - A > -1) {// 만약 5분을 뺐는데 -1이 안되면
			T -= A;
			A2++;
		}
		else if (T - B > -1) {// 만약 1분을 뺐는데 -1이 안되면
			T -= B;
			B2++;
		}
		else if (T - C > -1) {// 먄약 10초를 뺐는데 -1이 안되면
			T -= C;
			C2++;
		}
	}
}