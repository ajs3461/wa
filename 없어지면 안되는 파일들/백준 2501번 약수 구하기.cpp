#include <cstdio>
int main() {
	int a, b, save = 0, count = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			save = i;
			count++;
		}
		if (count == b) break;
		else if (i == a && count != b) {
			printf("%d", 0);
			return 0;
		}
	}
	printf("%d", save);
	return 0;
}