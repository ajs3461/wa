#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;
long long int ME[31][31];
long long int help_me(int wtf, int ftw) {
    ME[0][0] = 0;
    ME[1][1] = 1;
    for (int fuck = 1; fuck <= wtf; fuck++) {
        for (int kcuf = 1; kcuf <= ftw; kcuf++) {
            if (kcuf == 0) {
                ME[fuck][kcuf] = 1;
            }
            if (fuck == kcuf) {
                ME[fuck][kcuf] = 1;
                break;
            }
            else {
                ME[fuck][kcuf] = ME[fuck - 1][kcuf - 1] + ME[fuck - 1][kcuf];
            }
        }
    }
    return ME[wtf][ftw];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A, B;
    cin >> A >> B;
    cout << help_me(A, B);
}