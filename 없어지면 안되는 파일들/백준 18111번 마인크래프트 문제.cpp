#include <cstdio>
int d[64000000];
int main() {
    int a, b, c[2], t[2] = {0}, count = 0, Jyee = 0; // save는 d 높이를 저장, t는 시간을 저장, Jyee는 최종 높이를 저장
    t[0] = 214748364;
    scanf("%d %d %d", &a, &b, &c[0]);
    c[1] = c[0];
    for (int i = 0; i < a * b; i++) scanf("%d", &d[i]);
    for (int j = 0; j <= 256; j++) {
        for (int i = 0; i < a * b; i++) {
            count = d[i];
            count = count - j;
            if (count < 0) { // 설치
                c[0] = c[0] + count;
                t[1] -= count;
            }
            else if (count >= 0) { // 부수는거
                c[0] = c[0] + count;
                t[1] += 2 * count;
            }
        }
        if (t[0] >= t[1] && c[0] >= 0) {
            t[0] = t[1];
            Jyee = j;
        }
        t[1] = 0;
        c[0] = c[1];
    }
    printf("%d %d\n", t[0], Jyee);
    return 0;
}