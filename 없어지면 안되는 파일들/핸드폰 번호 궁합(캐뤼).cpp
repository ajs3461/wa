#include <stdio.h>
int main() {
	char ab[16];
	int help = 1, me = 15;
	for (int c = 0; c < 16; c = c + 2) {
		scanf(" %c", &ab[c]);
		ab[c] -= 48;
	}
	for (int d = 1; d < 16; d = d + 2) {
		scanf(" %c", &ab[d]);
		ab[d] -= 48;
	}
	while (true) {
		ab[help - 1] += ab[help];
		if (ab[help - 1] >= 10) ab[help - 1] -= 10;
		if (help != me)
			help++;
		else { help = 1; me--;}
		if (me == 1) break;
	}
	printf("%d%d", ab[0], ab[1]);
	return 0;
}