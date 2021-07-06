#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    for (int l = 0; l < 3; l++) {
        if (a == -1 || b == -1 || c == -1) {
            if (a == -1) {
                cout << sqrt(c * c - b * b);
            }
            if (b == -1) {
                cout << sqrt(c * c - a * a);
            }
            if (c == -1) {
                cout << sqrt(a * a + b * b);
            }
            else if (a + b > c) {
                cout << "Impossible.";
                continue;
            }
            if (a == 0 && b == 0 && c == 0) {
                break;
            }
        }
    }   
}