#include <stdio.h>
int main() {
	long long int a, b = 0;
	scanf("%lld", &a);
	b = a;
	for (int i = a; i > 0; i--) {
		if (i == 1) {
			printf("%d! = %d\n", i, i);
			break;
		}
		printf("%d! = %d * %d!\n", i, i, i - 1);
		b = b * (i - 1);
	}
	printf("%lld", b);
	return 0;
}