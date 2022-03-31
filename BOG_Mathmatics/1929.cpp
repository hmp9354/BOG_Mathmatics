// 수정하지 않음
#include <iostream>

int main() {
	int M, N;
	scanf_s("%d %d", &M, &N);

	int i = M;
	bool only = true;
	while (i <= N) {
		only = true;
		if (i == 1) {
			only = false;
		}
		else if (i % 2) {
			for (int j = 3; j < i; j += 2) {
				if (!(i % j)) {
					only = false;
					break;
				}
			}
		}
		else { only = false; }

		if (only) {
			printf("%d\n", i);
		}
		i++;
	}
}