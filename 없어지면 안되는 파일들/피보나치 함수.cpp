#include <stdio.h>
int a[42][2];
int b, c, d = 0, tlqkf = 0;

void f(int n) {
    a[0][0] = 1;
    a[0][1] = 0;
    a[1][0] = 0;
    a[1][1] = 1;
    if (n == 0) {
        d++;
        return ;//1
    }
    else if (n == 1) {
        tlqkf++;
        return ;//12
    }
    else {
        for (int diqkf = 2; diqkf <= n; diqkf++) {
            a[diqkf][0] = a[diqkf - 2][0] + a[diqkf - 1][0];
            a[diqkf][1] = a[diqkf - 2][1] + a[diqkf - 1][1];
        }
       
            return ;
    }
}
int main() {
    int B;
    scanf("%d", &b);
    f(40);
    for (c = 0; c < b; c++) {
        scanf("%d", &B);
        printf("%d %d\n", a[B][0], a[B][1]);
        d = 0;
        tlqkf = 0;
        //printf("%d %d\n", fibonacci(c), fibonacci(c + 1));
    }
    return 0;
}