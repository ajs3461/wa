#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;
int D[10000];
long long int F(int B) {
    D[1] = 1;
    D[2] = 1;
    int a = 0;
    for (int C = 3; C <= B; C++) {
        D[C] = D[C - 2] + D[C - 1];
    }
    return D[B];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A;
    cin >> A;
    cout << F(A);
}