#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, l;//소수 변수 3개 생성
    l = 1;
    while (true) {//반복문 3번돌아가는거 만듬
        switch (l) {
        case 1:
            cout << "Triangle #1\n";
            break;
        case 2:
            cout << "Triangle #2\n";
            break;
        case 3:
            cout << "Triangle #3\n";
            break;
        }
        cin >> a >> b >> c;
        if (a == -1 || b == -1 || c == -1) {//만약 3개의 소수 변수가 -1이라면
            if (a == -1) {//만약 a가 -1이라면
                cout << sqrt(c * c - b * b) << "\n";//a의 진짜 숫자 찾기
                l++;
                continue;
            }
            if (b == -1) {//만약 b가 -1이라면
                cout << sqrt(c * c - a * a) << "\n";//b의 진짜 숫자 찾기
                l++;
                continue;
            }
            if (c == -1) {//만약 c가 -1이라면
                cout << sqrt(a * a + b * b) << "\n";//c의 진짜 숫차 찾기
                l++;
                continue;
            }
            else if (a + b > c) {//삼각형 만들 수 있는지 없는지 판단
                if (a + b > !c) {
                    cout << "Impossible.\n";//만약 안돼면 "불가능"을 출력
                    l++;
                    continue;
                }
            }
            if (a == 0 && b == 0 && c == 0) {
                break;
            }
        }
    }
}