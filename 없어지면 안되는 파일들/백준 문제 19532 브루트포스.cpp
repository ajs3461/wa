#include <stdio.h>
int a, b, c, d, e, f, i, j;
bool count;
void oh_god_plz() {
	for (i = -999; i <= 999; i++) {
		for (j = -999; j <= 999; j++) {
			if (a * i + b * j == c && d * i + e * j == f) {
				printf("%d %d", i, j);
				count = true;
				break;
			}
		}
		if (count == true) {
			break;
		}
	}
}
int main() {
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	oh_god_plz();
	return 0;
}