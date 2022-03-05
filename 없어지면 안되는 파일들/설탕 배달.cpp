#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;
void dkwqlrkrhtlvek (int A, int B, int C) {
    for (int D = 0; D < 2000; D++) {
        for (int E = 0; E < 2000; E++) {
            if (B * D + C * E == A) {
                cout << D + E;
                return;
            }
            else if (B * D + C * E > A) {
                break;
            }
        }
    }
    cout << -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b = 3, c = 5;
    cin >> a;
    dkwqlrkrhtlvek(a, b, c);
}