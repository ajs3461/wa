#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;
long long int ME[80];
long long int help_me(int wtf) {
    ME[1] = 1;
    ME[2] = 1;
    for (int kcuf = 3; kcuf <= wtf; kcuf++) {
        ME[kcuf] = ME[kcuf - 2] + ME[kcuf - 1];
    }
    return ME[wtf] * 2 + (ME[wtf] + ME[wtf - 1]) * 2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int help;
    cin >> help;
    cout << help_me(help);
}